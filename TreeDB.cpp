#include "TreeDB.h"
#include <iostream>


/////////////////////////////Function Added////////////////////////
bool TreeDB::isEmpty(){
    if( root == NULL){ 
        //cout << "Empty Tree" << endl;
        return true ;}
    else {
        //cout << "Non Empty Tree" << endl;
        return false;}
}

void TreeDB::Delete_Tree(TreeNode* T_Node){
    if(T_Node == NULL) {return;}
    Delete_Tree(T_Node->getLeft());
    Delete_Tree(T_Node->getRight());
    delete T_Node;
}


bool TreeDB::Insert(DBentry* newEntry,TreeNode* T_Node){
    string Name = newEntry->getName();
    if(Name == (T_Node->getEntry()->getName())){
        cout << "Error: entry alread exist"<<endl;
        return false;
    }
    if(Name < (T_Node->getEntry()->getName()) ){
        if(T_Node->getLeft()==NULL){
           TreeNode* temp = new TreeNode(newEntry);
           T_Node->setLeft(temp);
           cout <<"Success"<<endl;
           return true;
        }
        else {Insert(newEntry,T_Node->getLeft());}
    }
    
    if(Name > (T_Node->getEntry()->getName()) ){
        if(T_Node->getRight()==NULL){
           TreeNode* temp = new TreeNode(newEntry);
           T_Node->setRight(temp);
           cout << "Success" << endl;
           return true;
        }
        else {Insert(newEntry,T_Node->getRight());}
    }
    
}

TreeNode* TreeDB::Search(string name,TreeNode* T_Node, bool &Found){
    if(T_Node == NULL){
        Found = false; 
        cout << "Error: entry does not exist"<<endl;
        return NULL;}
    else{
    probesCount ++;
        if(name == (T_Node->getEntry()->getName())){
            Found = true;
            return T_Node;
        }
        if(name < (T_Node->getEntry()->getName()) ){
            return Search(name,T_Node-> getLeft(),Found);
        }
    
        if(name > (T_Node->getEntry()->getName()) ){
            return Search(name,T_Node-> getRight(),Found);
        }    
    }
}

//TreeNode* TreeDB::Search_Parent(string name,TreeNode* T_Node, bool &Found ,char &Direction){
//    if((T_Node->getLeft()==NULL)&&(T_Node->getRight()==NULL)){
//        Found = false; 
//        cout << "Error: entry does not exist"<<endl;
//        return NULL;}
//    else{
//        if(name == (T_Node->getLeft()->getEntry()->getName())){
//            Found = true;
//            Direction = 'L';
//            return T_Node;
//        }
//        if(name == (T_Node->getRight()->getEntry()->getName())){
//            Found = true;
//            Direction = 'R';
//            return T_Node;
//        }
//        if(name < (T_Node->getEntry()->getName()) ){
//            return Search_Parent(name,T_Node-> getLeft(),Found,Direction);
//        }
//    
//        if(name > (T_Node->getEntry()->getName()) ){
//            return Search_Parent(name,T_Node-> getRight(),Found,Direction);
//        }    
//    }
//}


TreeNode* TreeDB::Max_Left_Tree(TreeNode* T_Node){
    if(T_Node->getRight() == NULL){ return T_Node; }
    else{ return Max_Left_Tree(T_Node->getRight());}
    
}

void TreeDB::Count_Active(TreeNode* T_Node, int &Active_num)const{
    if(T_Node == NULL){return;}
    else{
        if((T_Node->getEntry()->getActive())==true){Active_num++;}
        Count_Active(T_Node-> getLeft(), Active_num);
        Count_Active(T_Node-> getRight(), Active_num);
    }
}

///////////////////////////////////////////////////////////////////
   // the default constructor, creates an empty database.
   TreeDB::TreeDB(){
     root = NULL;
     probesCount = 0;
   }

   // the destructor, deletes all the entries in the database.
   TreeDB::~TreeDB(){
     Delete_Tree(root);
   }
   
   // inserts the entry pointed to by newEntry into the database. 
   // If an entry with the same key as newEntry's exists 
   // in the database, it returns false. Otherwise, it returns true.
   bool TreeDB::insert(DBentry* newEntry){
    if(isEmpty()==true){
        root = new TreeNode(newEntry);
        cout << "Success" << endl;
        return true;
    }
    else{
        if(Insert(newEntry, root)==true){
        return true;}
        }
    return false;
    
   }
   
   // searches the database for an entry with a key equal to name.
   // If the entry is found, a pointer to it is returned.
   // If the entry is not found, the NULL pointer is returned.
   // Also sets probesCount
   DBentry* TreeDB::find(string name){
       bool Found;
       TreeNode* Node_Found = Search(name,root,Found);
       if(Found == true){
           cout << *(Node_Found->getEntry());
           return Node_Found->getEntry();
       }
       else{
           return NULL;
       }
       
   }

   // deletes the entry with the specified name (key)  from the database.
   // If the entry was indeed in the database, it returns true.
   // Returns false otherwise.
   // See section 6 of the lab handout for the *required* removal method.
   // If you do not use that removal method (replace deleted node by
   // maximum node in the left subtree when the deleted node has two children)
   // you will not match exercise's output.
   bool TreeDB::remove(string name){
// Not delete succesfull
       TreeNode* Node_Found = root->getRight();
       delete (Node_Found);
       Node_Found = NULL;

//       bool Found;
//       TreeNode* Node_Found = Search(name,root,Found);
//       if(Found == true){
//           //Node is leaf
//           if((Node_Found->getLeft()==NULL)&&(Node_Found->getRight()==NULL)){
//               cout << "leaf found" <<endl;
//               cout << "DELETing "<< *(Node_Found->getEntry());
//               delete Node_Found;
//               Node_Found = NULL;
//              if(Node_Found == NULL){cout << "node deleted" << endl;}
//              cout << Node_Found;
//               return true;
//           }
//           //Empty Right sub tree
//           if((Node_Found->getLeft()!=NULL)&&(Node_Found->getRight()==NULL)){
//               TreeNode* Node_Left;
//               Node_Left = Node_Found->getLeft();
//               TreeNode* temp = Node_Found;
//               Node_Found = Node_Left;
//               delete temp;
//               temp == NULL;
//               return true;
//           }
//           //Empty Left Sub tree
//           if((Node_Found->getLeft()==NULL)&&(Node_Found->getRight()!=NULL)){
//               TreeNode* Node_Right;
//               Node_Right = Node_Found->getRight();
//               TreeNode* temp = Node_Found;
//               Node_Found = Node_Right;
//               delete temp;
//               temp == NULL;
//               return true;
//           }
//           //Both left and right sub tree
//           if((Node_Found->getLeft()!=NULL)&&(Node_Found->getRight()!=NULL)){
//               TreeNode* Node_Left;
//               Node_Left = Node_Found->getLeft();
//               TreeNode* Max_Left;
//               Max_Left = Max_Left_Tree(Node_Left);
//               *(Node_Found->getEntry())=*(Max_Left->getEntry());
//               delete Max_Left;
//               Max_Left == NULL;
//               return true;
//           }
//           
//    }
//       else{
//           return false;
//       }       
   }
	
   // deletes all the entries in the database.
   void TreeDB::clear(){
       Delete_Tree(root);
   }
    
   // prints the number of probes stored in probesCount
   void TreeDB::printProbes() const{
       cout << probesCount << endl;
   }
   
   // computes and prints out the total number of active entries
   // in the database (i.e. entries with active==true).
   void TreeDB::countActive () const{
       int Active_num;
       Count_Active(root, Active_num);
       cout << Active_num << endl;
    }

   // Prints the entire tree, in ascending order of key/name
   ostream& operator<< (ostream& out, const TreeDB& rhs){
       out << rhs.root;
       
   }

// You *may* choose to implement the function below to help print the 
// tree.  You do not have to implement this function if you do not wish to.
   ostream& operator<< (ostream& out, TreeNode* rhs){
           if(rhs != NULL){
            out << rhs->getLeft();
            out << *(rhs->getEntry());
            out << rhs->getRight();
           return out;}
   }   
   
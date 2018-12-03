#include <iostream>
#include "DBentry.h"
#include "TreeDB.h"
#include "TreeNode.h"
using namespace std;

int main()
{  
////////////////////TEST CASE FOR DBentry////////////
//   DBentry A("amino acid", 123456, true);
//   A.setName("sulfuric acid");
//   A.setIPaddress(9999999);
//   A.setActive (false);
//   A.getName();
//   A.getIPaddress();
//   A.getActive();
//   cout << A;
///////////////////END OF DBentry////////////////////

///////////////TEST TreeNode//////////////////////
//DBentry* pa = new DBentry("A", 123456, true);
//DBentry* pb = new DBentry("B", 123456, false);
//DBentry* pc = new DBentry("C", 123456, true);
//DBentry* pd = new DBentry("D", 123456, false);
//DBentry* pe = new DBentry("E", 123456, true);
//
//TreeNode* A = new TreeNode(pa);
//TreeNode* B = new TreeNode(pb);
//TreeNode* C = new TreeNode(pc);
//TreeNode* D = new TreeNode(pd);
//TreeNode* E = new TreeNode(pe);
//
//A->setLeft(B);
//A->setRight(C);
//B->setLeft(D);
//B->setRight(E);
//
//TreeNode* temp = A;
//A = B;
//delete temp;
//cout << A;
 
//The search function
//TreeNode* search(string name,TreeNode* T_Node, bool &Found){
//    if(T_Node == NULL){
//        Found = false; 
//        cout << "Error: entry does not exist"<<endl;
//        return NULL;}
//    else{
//        if(name == (T_Node->getEntry()->getName())){
//            Found = true;
//            return T_Node;
//        }
//        if(name < (T_Node->getEntry()->getName()) ){
//            return search(name,T_Node-> getLeft(),Found);
//        }
//    
//        if(name > (T_Node->getEntry()->getName()) ){
//            return search(name,T_Node-> getRight(),Found);
//        }    
//    }
//}

//TreeNode* Delete_Node;
//string name = "benzoic acid";
//bool Found;
//Delete_Node = search(name,A,Found);
//*(Delete_Node->getEntry()) = *pa;
//cout << A;


// The find max_left
//TreeNode* max_Left_Tree(TreeNode* T_Node){
//    if(T_Node->getRight() == NULL){ return T_Node; }
//    else{ return max_Left_Tree(T_Node->getRight());}
//    
//}

//TreeNode* Max_Left;
//Max_Left = max_Left_Tree(A);
//cout << Max_Left;

///////////////END OF TreeNode////////////////////

///////////////TEST TreeDB////////////////////////
DBentry* pa = new DBentry("amino acid", 123456, true);
DBentry* pb = new DBentry("sulfuric acid", 123456, false);
DBentry* pc = new DBentry("benzoic acid", 123456, true);
DBentry* pd = new DBentry("c", 123456, true);
DBentry* pe = new DBentry("f", 123456, true);
DBentry* pf = new DBentry("g", 123456, false);
DBentry* pg = new DBentry("d", 123456, true);
DBentry* ph = new DBentry("e", 123456, true);

TreeDB T;
T.insert(pa);
T.insert(pb);
T.insert(pc);
T.insert(pd);
T.insert(pe);
T.insert(pf);
T.insert(pg);
T.insert(ph);
cout << T;
//cout << "______________________"<<endl;
//T.find("c");
//T.printProbes();
//cout << "______________________"<<endl;
//T.countActive ();
T.clear();
cout << T;
//T.remove("benzoic acid");
//cout << T;
//T.remove("f");
//cout << T;


///////////////END OF TreeDB/////////////////////


}

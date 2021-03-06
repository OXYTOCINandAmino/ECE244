#include <iostream>
#include "TreeNode.h"
    // Default constructor
    TreeNode::TreeNode(){
     entryPtr = NULL;
     left = NULL;
     right = NULL;
    }
    // A useful constructor
    TreeNode::TreeNode(DBentry* _entryPtr){
     entryPtr =  _entryPtr;
     left = NULL;
     right = NULL;
     //cout << "Creat TreeNode" << endl;
    }

    // the destructor
    TreeNode::~TreeNode(){
        delete entryPtr;
        cout << "Destruct TreeNode" << endl;
    }

    // sets the left child of the TreeNode.
    void TreeNode::setLeft(TreeNode* newLeft){
       left = newLeft; 
    }

    // sets the right child of the TreeNode
    void TreeNode::setRight(TreeNode* newRight){
       right = newRight;
    }

    // gets the left child of the TreeNode.
    TreeNode* TreeNode::getLeft() const{
       return left;
    }

    // gets the right child of the TreeNode
    TreeNode* TreeNode::getRight() const{
       return right;
    }

    // returns a pointer to the DBentry the TreeNode contains. 
    DBentry* TreeNode::getEntry() const{
       return entryPtr; 
    }
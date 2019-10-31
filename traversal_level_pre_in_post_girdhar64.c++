#include<bits/stdc++.h>
#include<string>
using namespace std;
// Depth First Traversals:
// (a) Inorder (Left, Root, Right) : 4 2 5 1 3
// (b) Preorder (Root, Left, Right) : 1 2 4 5 3
// (c) Postorder (Left, Right, Root) : 4 5 2 3 1
//
// Breadth First or Level Order Traversal : 1 2 3 4 5
class node
{
public:
  int data;
  node* right;
  node* left;
};
// Algorithm Inorder(tree)
//    1. Traverse the left subtree, i.e., call Inorder(left-subtree)
//    2. Visit the root.
//    3. Traverse the right subtree, i.e., call Inorder(right-subtree)
void printInorder(node* temp)
{
  if(temp==NULL)
    return;
  printInorder(temp->left);
  cout<<temp->data<<" ";
  printInorder(temp->right);
}
// Algorithm Preorder(tree)
//    1. Visit the root.
//    2. Traverse the left subtree, i.e., call Preorder(left-subtree)
//    3. Traverse the right subtree, i.e., call Preorder(right-subtree)
void printPreorder(node* temp)
{
  if(temp==NULL)
    return;
  cout << temp->data << " ";
  printPreorder(temp->left);
  printPreorder(temp->right);
}
// Algorithm Postorder(tree)
//    1. Traverse the left subtree, i.e., call Postorder(left-subtree)
//    2. Traverse the right subtree, i.e., call Postorder(right-subtree)
//    3. Visit the root.
void printPostorder(node* temp)
{
  if (temp == NULL)
     return;
 printPostorder(temp->left);
 printPostorder(temp->right);
 cout << temp->data << " ";
}
int main()
{
  node* root=new node();
  node* second=new node();
  node* third=new node();
  node* fourth=new node();
  node* fifth=new node();
  root->data=1;
  root->left=second;
  root->right=third;
  second->data=2;
  second->left=fourth;
  second->right=fifth;
  third->data=3;
  third->right=third->left=NULL;
  fourth->data=4;
  fourth->right=fourth->left=NULL;
  fifth->data=5;
  fifth->right=fifth->left=NULL;
  printPreorder(root);
  cout<<"\n";
  printInorder(root);
  cout<<"\n";
  printPostorder(root);
  return 0;
}

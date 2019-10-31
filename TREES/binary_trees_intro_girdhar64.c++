int arr[N]
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *right;
  node *left;
};
int main()
{
  node* head= new node();
  node* first= new node();
  node* second= new node();
  head->data=0;
  head->left=first;
  head->right=second;
  first->data=1;
  second->data=2;
  cout<<head->data<<" "<<first->data<<" "<<second->data<<endl;
  return 0;

}

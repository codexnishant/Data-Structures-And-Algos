#include<bits/stdc++.h>
using namespace std;
struct node{
 str data;
 node *link;
};
//creating head pointer and equating to NULL
node *head=NULL;
void printlist(node* n)
{
  if(n==NULL)
  cout<<"list is Empty"<<" ";
  else
  while(n!=NULL)
  {
    cout<<n->data;
    n=n->link;
  }
}
void insertEnd (int d)
{

 node *ptr = new node();
 ptr->data=d;
 ptr->link=NULL;

 if(head==NULL)
 head=ptr;
 else
 {
  node *temp = head;
  while(temp->link != NULL)
  {
   temp=temp->link;
  }
  temp->link=ptr;

 }

}
bool ll_is_palindrome(node * head)
{
  
}
int main()
{
  insertEnd(1);
  insertEnd(2);
  insertEnd(3);
  insertEnd(4);
  insertEnd(3);
  insertEnd(2);
  insertEnd(1);
  printlist(head);
  return 0;
}

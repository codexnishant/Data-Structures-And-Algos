#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node* link;
};
node* head=NULL;
int count=0;
void printlist(node* n)
{
  while(n!=NULL)
  {
    cout<<n->data<<" ";
    n=n->link;
  }
}
void insertbeg(int d)
{
  node* ptr=new node();
  ptr->data=d;
  ptr->link=head;
  head=ptr;
}
void insertend(int d)
{
  node* temp=head;
  node* ptr=new node();
  while(temp->link!=NULL)
  {temp=temp->link;}
  ptr->data=d;
  ptr->link=NULL;
  temp->link=ptr;
}
void deletebeg()
{
  if(head==NULL)
  cout<<"list empty";
  node* ptr=head;
  head=head->link;
  free(ptr);
}
void deleteEnd()
{
 node *ptr;

 //if list is empty.
 if(head==NULL)
  cout<<"EMPTY LIST\n";
 //if list has only one node.
 if(head->link==NULL)
 {
  ptr=head;
  head=NULL;
  free(ptr);
 }
 //Traversing the list.
 else
 {  node *prev;
  ptr=head;
  while(ptr->link!=NULL)
  {
   prev=ptr;
   ptr=ptr->link;
  }
  prev->link=NULL;
  free(ptr);
 }
}
int getcount(node* n)
{
  if(n==NULL)
    return 0;
  return 1+getcount(n->link);
}
int main()
{
  insertbeg(1);
  insertbeg(2);
  insertbeg(3);
  insertend(4);
  insertend(5);
  insertend(6);
  printlist(head);
  cout<<"\n";
  deletebeg();
  printlist(head);
  cout<<"\n";
  deleteEnd();
  deletebeg();
  printlist(head);
  cout<<"\n";
  getcount(head);
}

#include<bits/stdc++.h>
using namespace std;
//Creating Node Structure
struct node{
 int data;
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
int findLoop (node *head)
{
int looplen=0;
node *slow, *fast;
slow=head;
fast=head;
 while (fast!=NULL && fast->link!=NULL )
 {
 fast= fast->link->link;
 slow = slow->link;
 looplen++;

  if (slow==fast)
  {cout<<"yes length is"<<looplen ;break;}
}
return 0;
}
int main()
{
  insertEnd(1);
  insertEnd(2);
  insertEnd(3);
  insertEnd(4);
  insertEnd(5);
  printlist(head);
  head->link->link->link=head;
  findLoop(head);
  return 0;
}

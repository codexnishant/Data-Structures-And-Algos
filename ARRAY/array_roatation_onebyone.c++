// array rotation program(using one by one ratation,d=rotation point)
//left and right rotation available
#include<bits/stdc++.h>
using namespace std;
void leftrotbyone(int arr[],int n)
{
  int temp=arr[0],i;
  for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];
  arr[i]=temp;
}
void leftrotate(int arr[],int d,int n)
{
  for(int i=0;i<d;i++)
    leftrotbyone(arr,n);
}
void printarr(int arr[],int n)
{
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  leftrotate(arr,5,n);
  printarr(arr,n);
  return 0;
}

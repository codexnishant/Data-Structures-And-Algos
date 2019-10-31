#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int start,int end)
{
  while(start<end)
  {
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}
void leftrotate(int arr[],int d,int n)
{
  reversearray(arr,0,d-1);
  reversearray(arr,d,n-1);
  reversearray(arr,0,n-1);
}
void printarr(int arr[],int size)
{
  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={1,2,3,4,5,6,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  int d=3;
  // in case RF is > than ns
  d=d%n;
  leftrotate(arr,d,n);
  printarr(arr,n);

  return 0;
}

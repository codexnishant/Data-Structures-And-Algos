#include<bits/stdc++.h>
using namespace std;
void insert_sort(int arr[],int n)
{
  for(int i=1;i<=n-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      int temp=arr[i+1];
      int loc=i+1;
      while(loc!=1 && arr[loc-1]>temp)
      {
        arr[loc]=arr[loc-1];
        loc=loc-1;
      }
      arr[loc]=temp;
    }
  }
}

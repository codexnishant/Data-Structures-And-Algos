#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int arr[N],i,j;
  for(i=0;i<N;i++)
    cin>>arr[i];
  for(i=0;i<N-1;i++)
    for(j=0;j<N-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  for(int k=0;k<N;k++)
    cout<<arr[k]<<" ";

}

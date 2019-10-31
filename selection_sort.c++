#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int arr[N];
  for(int i=0;i<N;i++)
    cin>>arr[i];
  for(int i=0;i<N;i++)
    for(int j=i+1;j<N;j++)
      {
        if(arr[i]>arr[j])
        {
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
  for(int k=0;k<N;k++)
    cout<<arr[k]<<" ";
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int sieveprime(int n)
{
  int prime[n+1];
  for(int i=0;i<=n;i++)
    prime[i]=1;
  for(int p=2;p*p<=n;p++)
  {
    if(prime[p]==1)
    {
      for(int i=p*p;i<=n;i+=p)
        prime[i]=0;
    }
  }
  for(int p=2;p<=n;p++)
    if(prime[p]==1)
      cout<<p<<"\n";
  return 0;
}
int main()
{
  int n;
  cout<<"enter value"<<endl;
  cin>>n;
  cout<<"primes upto n are"<<"\n";
  sieveprime(n);
  return 0;
}

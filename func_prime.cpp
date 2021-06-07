#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n,int i=-2)
{
  if(n<=2)
  {
    return true;
  }
  else
  {
    return false;
  }
}
if(n%i==0)
{
  return false;
}
if(i*i>n)
{
  return true;
}
isPrime(n,i+1);
}
int main()
{
  int n;
  cin>>n;
  cout<<isPrime(n);
  return 0;
}
OUTPUT:
5
 1//prime
  

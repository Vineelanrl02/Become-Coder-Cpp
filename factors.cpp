#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
  //cout<<1<<" ";
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" "<<n/i<<" ";
		}
	}
  //cout<<n;
	return 0;
}
OUTPUT:
30
2 15 3 10 5 6
  
 //output:
  30
  1 2 15 3 10 5 6 30

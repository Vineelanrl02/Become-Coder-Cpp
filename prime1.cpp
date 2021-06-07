#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int factor_count=0;
	//implement logic to find factors
	for(int i=1;i<=n;i++)
    {
		if(n%i==0)
		{
			factor_count++;
		}
	}
		if(factor_count==2)
		{
			cout<<"prime";
		}
		else
		{
			cout<<"NOt prime";
		}
 return 0;
}
OUTPUT:
2
 prime

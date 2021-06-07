//codeforces test ques
/*given an integer n,find max value of integer k such that followng condition holds
 n&(n-1)&(n-2)&(n-3)&...k=0   input:3 2 5 17 Output:1 3 15*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ans;
		ans=n;
		for(long long int i=n;i>=1;i--)
		{
			ans=ans&i;
			if(ans==0)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
}
OUTPUT:
3
2
 1
5
 3
17
 15

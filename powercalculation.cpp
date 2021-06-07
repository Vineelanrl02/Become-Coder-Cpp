#include<bits/stdc++.h>
using namespace std;
int main()
{
	int base,exp;
	cin>>base>>exp;
	int res=1;
	while(exp)
	{
		if(exp&1==1)//if set,multiply answer
		{
			res=res*base;
		}
		exp=exp>>1;//next bit set or not
		base=base*base;
	}
	cout<<res;
}
OUTPUT
3 10
59049

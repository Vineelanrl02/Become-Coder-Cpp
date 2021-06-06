#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cin>>num;
	cin>>pos;
	if(num &((pos-1)<<1))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
OUTPUT:
1234
  12
  YES
  
1234 
  5
NO

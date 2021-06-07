#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int count=0;//to count set bits
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;//to know that nxt bit is 1 or not
    }
    cout<<count;
	return 0;
}
OUTPUT:
10
2

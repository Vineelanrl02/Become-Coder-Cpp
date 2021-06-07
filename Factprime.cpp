#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;//30
	for(int i=2;i*i<=n;i++)//2to5-->2 3 4 5
	{
		while(n%i==0)//15%2==0 15%3==0 15%5==0 1%5!=0 loop stops
		if(n%i==0)
		{
			cout<<i<<" ";//2 3
			n=n/i;//30/2-->15/3-->5-->5/5-->1
		}
	}
	cout<<n;
	return 0;
}
OUTPUT:
30
2 3 5
  
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;//30
	for(int i=2;i*i<=n;i++)//2to5-->2 3 4 5
	{
		while(n%i==0)//15%2==0 15%3==0 15%5==0 1%5!=0 loop stops
		if(n%i==0)
		{
			cout<<i<<" ";//2 3
			n=n/i;//30/2-->15/3-->5-->5/5-->1
		}
	}
	if(n>1)
	{
	cout<<n;
}
	return 0;
}
OUTPUT:
30
2 3 5

//To find whether the given number is prime or not
//Method 1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	   cout<<"prime number";
	else
	   cout<<"not a prime number";
	  return 0;    
}
//Method 2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=1;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			  cout<<"not a prime number";
			count=0;
			break;
		}
	}
	if(count!=0)
	   cout<<"prime number";
	else 
	  return 0;    
}
//Method 3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=1;
	cin>>n;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			  cout<<"not a prime number";
			count=0;
			break;
		}
	}
	if(count!=0)
	   cout<<"prime number";
	else 
	  return 0;    
}

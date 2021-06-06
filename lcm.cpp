#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	int r=2,res=1;
    while(1)//true
    {
    	if(num1%r==0 && num2%r==0)
    	{
    		num1=num1/r;
    		num2=num2/r;
    		res=res*r;
		}
		else
		{
			r++;
		}
		if(num1<r || num2<r)
		{
			break;
		}
		cout<<res*num1*num2;
		return 0;
	}	
}
OUTPUT:
12 24
24
  

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1;
	int num2;
	cin>>num1>>num2;
	if(num1<num2)
	{
		swap(num1,num2);
	}
	for(int i=num1;i<=num1*num2;i++)
	{
		if(i%num1==0 && i%num2==0)
	{
		cout<<i;
		break;
	}
}

	return 0;
}

OUTPUT:
12 24
 24
  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1>>num2;//12 24
	if(num1>num2)
	{
		swap(num1,num2);
	}
   for(int i=num2;i<num1*num2;i++)
   {
   	if(i%num1==0 && i%num2==0)
   	{
   	   cout<<i<<"  ";
		  break;	
	}
   }
}
OUTPUT:
12 24
  24
  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	int r=2,res=1;
    while(1)//true
    {
    	if(num1%r==0 && num2%r==0)
    	{
    		num1=num1/r;
    		num2=num2/r;
    		res=res*r;
		}
		else
		{
			r++;
		}
		if(num1<r || num2<r)
		{
			break;
		}
		cout<<res*num1*num2;
		return 0;
	}	
}
OUTPUT:
 13 15
195

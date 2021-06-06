//1.great of two nums
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;//10 20   
	if(a>b)//10>20-->FALSE so goes to else block,if(0)->false,if(1)->true except 0 remaining nos true
	{
		cout<<"a is great";
	}
	else
	{
		cout<<"b is great";
	}
  
  OUTPUT:
 10 20
 20 is great
   
//2.GREAT OF THREE NUMS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;//10 20 30
	if(a>b && a>c)
	{
		cout<<"a is great";
	}
    else if(b>a && b>c)
	{
		cout<<"b is great";
	}
	else
	{
		cout<<"c is great";
	}
}
OUTPUT:
10 20 30
c is great
  
//3.great of 3nums using multiple if
//Multiple if-->more tym complexity than 2nd prog coz it checks all if conditions even though if one if condition is true.so better to go with else if
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"a is great";
	}
    else if(b>c && b>a)
	{
		cout<<"b is great";
	}
	if(c>a && c>b)
	{
		cout<<"c is great";
	}
  OUTPUT:
  10 20 30
  c is great
    
 //4
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b && a>=c)
	{
		cout<<"a is great"<<endl;
	}
    else if(b>=c && b>=a)
	{
		cout<<"b is great"<<endl;
	}
	if(c>=a && c>=b)
	{
		cout<<"c is great"<<endl;
	}
}
OUTPUT:
	10 30 20
	b is great
		

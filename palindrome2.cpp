#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=1221,r,res=0;
    int a=num;
    while(num)
    {
        r=num%10;
        res=res*10+r;
        num=num/10;
    }
    if(a==res)
    {
        cout<<"palindrome"<<" "<<a<<endl;
    }
    else
	{
        cout<<"not palindrome"<<" "<<a<<endl;
    }
}
OUTPUT:
palindrome 1221

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,rev=0,rem,p;

	cout<<"enter the number";
	cin>>n;
	p=n;
	while(n)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(p==rev)
	    cout<<rev<<"palindrome";
	else
		cout<<rev<<"not palindrome";
	return 0;
}

OUTPUT:
enter the number1321
1231not palindrome

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

#include<iostream>
#include<bits/stdc++.h>
void main()
{
    int n,a,r,rem=0;
    cin>>n;
    a=n;
    while(n>0)
    {
        r=n%10;
       n=n/10;
	    rem=rem*10+r;
    }
    if(a==rem)
    {
        cout<<a<<" Palindrome Number";
    }
    else
    {
        cout<<a<<"not a Palindrome Number";
    }
}

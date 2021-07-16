#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(auto it:s)//loop based on characters
	{
		cout<<it<<" ";
	 } 
	 cout<<"\n";
	 for(int i=0;i<s.size();i++)//loop based on index
	 {
	 	cout<<s[i]<<" ";
	 }
	 return 0;
}

string
OUTPUT:
s t r i n g 
s t r i n g 

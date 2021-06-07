#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve={1,0,2,6,4,3};
	sort(ve.begin(),ve.end());
	for(auto it:ve)
	{
		cout<<it<<endl;
	}
}

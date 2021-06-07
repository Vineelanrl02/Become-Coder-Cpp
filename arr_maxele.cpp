#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//logic to find max element
	int maxi=INT_MIN; 
	for(int i=0;i<n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
	}
	cout<<maxi;	
}
OUTPUT:
5
10 2 30 40 1
40
	
  //for min
  int min;
	for(int i=0;i<a;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<min;
}

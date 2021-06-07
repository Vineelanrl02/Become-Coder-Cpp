#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//length of array
	cin>>n;//read the length into n->5
	int arr[n];//declare the array of n length
	for(int  i=0;i<n;i++)//1->0,1,2,3,4,5,breaks
	{
		cin>>arr[i];//0th index->23, 1->45, 2->67, 3->80, 4->50, 
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
OUTPUT:
5
23 45 67 80 50
23 45 67 80 50
--------------


//exists only in latest versions of cpp
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
	for(auto it:arr)////it is an iterator which touches every element in the array
	{
		cout<<it<<" ";
	}
}

OUTPUT:
5
10 20 30 40 50
10 20 30 40 50

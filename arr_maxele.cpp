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
	int *maxi=max_element(arr,arr+n)
    cout<<*maxi;
	int frq[*maxi+1]={0};
	for(int i=0;i<n;i++)
	{
		frq[arr[i]]++;
	}
	for(int i=0;i<*maxifrq.size();i++)
	{
		cout<<frq[i]<<" ";
	}
	OUTPUT:
	10
        1 2 1 3 1 2 3 4 5 4
	0 3 2 2 2 1//times of repetition
	
//using dictionaries
map<int,int>dic;//map<key,value>
for(int i=0;i<n;i++)//1  2 1 3 1 4  1 5 6 7
{
	dic[arr[i]]++; //dic[1]++...{1:2};
}
for(auto it:dic) //to print dictionary
{
cout<<it.first<<" "<<it.second<<"\n" // first represents key second represents value
}
OUTPUT:
	10
	1 2 1 3 1 4 1 5 6 7
	1 4
	2 1
	3 1
	4 1
	5 1
	6 1
	7 1
		

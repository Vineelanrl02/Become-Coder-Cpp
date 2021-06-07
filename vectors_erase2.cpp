//ve.erase(ve.begin());-->always deletes the 1st element
//ve.erase(ve.begin()+1);-->1st use finf func. and find that index and then add 1 to that
//ve,.erase()+1,ve.begin()+3)-->to delete multiple elements
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>ve={2,12,20,24};
  //erase
  ve.erase(ve.begin());//this will erase the 1st value
  ve.erase(ve.begin()+1);
  return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n,x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int ind;
		int fl=0;
		for(int i=0;i<n;i++)
		
			if(x==a[i])
			{
				ind=i;
				fl=1;
				break;
			}
		}
		if(fl==1)
		{
			for(int i=ind;i<n-1;i++)
			{
				a[i]=a[i+1];
			}
			n=n-1;
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		else
		{
			cout<<-1;
		}
		return  0;
	}

	

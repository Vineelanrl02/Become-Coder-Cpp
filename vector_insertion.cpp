#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int cap;
    cin>>cap;//5
    int a[cap];//a[5];
    int n;
    cin>>n;//3 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // {10,20,30,__,__}
    int pos,x;
    cin>>pos>>x;//2,40
    // check wether has space to insert
    if(n==cap)
    {
        cout<<"array has no space to insert"<<endl;
    }
    else{
        int ind=pos-1;
        for(int i=n-1;i>=ind;i--)
        {
            a[i+1]=a[i];
        }
        a[ind]=x;
        n++;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
    }
    
//insert value in vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve={20,30,40};
	ve.insert(ve.begin(),100);
	//ve.insert(ve.begin()+2,100);//this adds the index value to 2
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	return 0;
}

//ve.begin()+2,2,100)-->inserts 2 times
//ve.begin()+1,100)-->inserts in 2nd positions
//+2-->3rd pos

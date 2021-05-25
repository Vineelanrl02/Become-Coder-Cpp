#include <iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
int main() {
    //creat a vector 
    vector<int>ve;
    ve.push_back(10);//{10}
    ve.push_back(20);//{10,20}
    ve.emplace_back(40);//{10,20,40}
    ve.pop_back();// to remove the last value
    //print or acess the elements in vector
    for(int i=0;i<ve.size();i++)
    {
        cout<<ve[i]<<" ";
    }
    vector<int>arr={10,20,30,40};//{100,100,100}
    //vector<int>arr(5);//{0,0,0,0,0}
    //copy one vector to another
    vector<int>ve1(ve);//{10,20}
    vector<int>::iterator it;
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    //
    for(vector<int>::iterator it=arr.begin(); it!=arr.end();it++)
    {
        cout<<*(it)<<" ";
    }
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*(it)<<" ";
    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    int x=20;
    it=find(arr.begin(),arr.end(),x);
    cout<<*(it);
     return 0;
}

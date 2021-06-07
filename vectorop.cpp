#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr; //vector<data type>name 
    arr.push_back(10);
    arr.push_back(20);
    arr.emplace_back(30);
    arr.emplace_back(40);
    vector<int>ve={10,20,30,40,50};
    //vector<int>vet(5);//{0,0,0,0,0}
    //vector<int>vet(5,100);//{100,100,100,100,100}
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=arr.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    vector<int>::iterator it1=arr.end();
    it1--;
    cout<<*(it1);
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*(it)<<" ";
    }
    int x=50;
    auto it=find(arr.begin(),arr.end(),x);
    if(it!=arr.end())
    {
        cout<<it-arr.begin();
    }
    else{
        cout<<-1;
    }
    
    return 0;
    

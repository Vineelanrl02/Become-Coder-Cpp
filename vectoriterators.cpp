#include <iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
int main() {
//creat a vector
vector<int>ve;
//push_back() –pushes the elements into a vector from the back
ve.push_back(10);//{10}
ve.push_back(20);//{10,20}
//emplace_back()–used to insert a new element into the vector container, new element is added to the end of the vector
 ve.emplace_back(40);//{10,20,40}
 //pop_back()- used to pop or remove elements from a vector from the back.
ve.pop_back();// to remove the last value
//print or acess the elements in vector
/*for(int i=0;i<ve.size();i++)
{
cout<<ve[i]<<" ";
}*/
vector<int>arr={10,20,30,40};//{100,100,100}
//vector<int>arr(5);//{0,0,0,0,0}
//copy one vector to another
vector<int>ve1(ve);//{10,20}
/*iterators: begin()–Returns an iterator pointing to the first element in the vector
end()–Returns an iterator pointing to last element's next element*/
vector<int>::iterator it;
/*cout<<*(it)<<endl;
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
}*/
int x=20;
it=find(arr.begin(),arr.end(),x);
cout<<*(it);
return 0;
}

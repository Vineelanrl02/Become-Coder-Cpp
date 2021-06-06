#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  for(int i=0;i<10;i++)
  {
  	cout<<i<<" ";
  }
}
OUTPUT:
0 1 2 3 4 5 6 7 8 9
 
//for(int i=0;i<10;i+=2) -->0 2 4 6 8 
//for(int i=0;i<10;i-=2)-->infinite loop
//for(int i=0;i>=0;i--)  
 //for(int i=0;i<10;i++); -->loop rotates but doesn't enter the loop but not an syntax/logical/runtime error,o/p is 10
 //for(int i=0;i<10/2;i++)-->O(n\2)=O(5\2)
  //for(int i=0;i<10;i*=2)-->4times..O(log n)
  
  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  for(int i=1;i<100;i*=2)
  {
  	cout<<i<<" ";
  }
}
OUTPUT:
1 2 4 8 16 32 64
  
  


  

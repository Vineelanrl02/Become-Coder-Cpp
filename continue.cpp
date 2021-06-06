//printing even nos below 10 using continue
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	while(i<=10)  //while(1)-->even numbers printed upto infinity, while(1)->true, while(0)->false
	{
		i++;
		if(i%2!=0)
		{
			continue;
		}
	    cout<<i<<" ";
	}
}
OUTPUT:
2 4 6 8 10
  

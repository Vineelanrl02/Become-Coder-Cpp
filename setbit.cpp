#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int set_count=0;
	while(num)
	{
		set_count+=num & 1;
		num>>=1;
	}
	cout<<set_count;
	return 0;
}
OUTPUT:
123
 6

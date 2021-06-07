//solve an array & vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={2,6,4,3,1};
	//we have sorting function -->sort()
	sort(a,a+5);//sort() is used to sort every element
	/*here a gives the address of the 1st element and 
	a+5 gives the address of the last element*/
	for(int i=0;i<5;i++) 
	{
		cout<<a[i]<<" ";
	}
}

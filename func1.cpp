//prototype-->in void display();-->there it displays that passes to where the func. is it is callled as prototype
//when the function call is first than function declartion
//we need to create a prototype of void to return else it retruns error
#include<bits/stdc++.h>
using namespace std;
void display();
int main()
{
	display();//function call
	return 0;
}
void display()
{
	cout<<"welcome"<<endl;
}

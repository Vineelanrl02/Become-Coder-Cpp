#include<iostream>
using namespace std;
namespace Vin //vin-->template
{
	int x=23;
	void printx()
	{
		cout<<x<<endl;
	}
}
namespace Girl
{
	int y=90;
	void printx()
	{
		cout<<y<<endl;
	}
}
int main()
{
	Vin::printx();//calling function which is namespace under vin
	Girl::printx();
	return 0;
}

OUTPUT:
23
90
  
 //instead of using namespace std..
 #include<iostream>
int main()
{
	int x=4;
	std::cout<<x<<std::endl;
	return 0;
}
OUTPUT:
4
 

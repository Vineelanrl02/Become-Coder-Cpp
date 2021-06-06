#include<iostream>
#include<string>
using  namespace std;
int main()
{
	string name;
	cin>>name;
	cout<<name;
	return 0;  
}
OUTPUT:
vineela
vineela

//CONCATENATION--> +
#include<iostream>
#include<string>
using  namespace std;
int main()
{
	string first="Vineela";
	string last="Nrl";
	cout<<first+" "+last;
	return 0;  
}
OUTPUT:
Vineela Nrl

//FOR FINDING LENGTH OF THE STRING
#include <iostream>
using namespace std;
int main() 
{
    string first = "vineela";
    cout<<first.size()<<endl;;
    cout<<first.length();
    return 0;
}
OUTPUT:
7
7
  
//SLICING THE SINGLE LETTER
#include <iostream>
using namespace std;
int main() 
{
    string name = "vineela";
    cout<<name[0]<<endl;
    cout<<name[6];
    return 0;
}
OUTPUT:
v
a


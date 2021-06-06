/*Bitwise operators--> AND,OR,XOR,RIGHT SHIFT,LEFT SHIFT*/
1.//bitwise AND (&)
#include<iostream>
using  namespace std;
int main()
{
	int x=10,y=5;
	int z=x&y;
	cout<<z;
	return 0;
}
OUTPUT:
0
  
2.//Bitwise OR (/)
#include<iostream>
using  namespace std;
int main()
{
	int x=12,y=8;
	int z=x/y;
	cout<<z;
	return 0;
}
OUTPUT:
1

3. //X-OR (^)
 #include<iostream>
using  namespace std;
int main()
{
	int x=12,y=8;
	int z=x^y;
	cout<<z;
	return 0;
}
OUTPUT:
4
  
4.//right shift(>>)-->num/(2)^k times value decreases
#include<iostream>
using  namespace std;
int main()
{
	int x=243,y=1;
	int z=x>>y;
	cout<<z;
	return 0;
}
OUTPUT:
121
  
5.//Left shift(<<)--> value increases n<<x = n*2^x
 #include<iostream>
using  namespace std;
int main()
{
	int x=10,y=2;
	int z=x<<y;
	cout<<z;
	return 0;
}
OUTPUT:
40

//to print n to 1-->tail recursion
#include <iostream>
using namespace std;
void PrintNtoone(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    PrintNtoone(n-1);   
}
int main() {
    int n;
    cin>>n;
    PrintNtoone(n);
    return 0;
}
OUTPUT:
4
4 3 2 1
  

//to print 1 to n-->non-tail recursion
#include <iostream>
using namespace std;
void PrintNtoone(int n)
{
    if(n==0)
    {
        return;
    }
    PrintNtoone(n-1);   
    cout<<n<<" ";
}
int main() {
    int n;
    cin>>n;
    PrintNtoone(n);
    return 0;
}
OUTPUT:
4
1 2 3 4
 
  
//sum of digits upto given num n
#include <iostream>
using namespace std;
int getsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+getsum(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<getsum(n);
    return 0;
}
OUTPUT:
4-->1+2+3+4=10
10
 
  
//sum of digits 
#include <iostream>
using namespace std;
int getsumdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+getsumdigits(n/10);
}
int main() {
    int n;
    cin>>n;
    cout<<getsumdigits(n);
    return 0;
}
OUTPUT:
253-->2+5+3=10
10
 
  

//
#include <iostream>
using namespace std;
void PrintNtoone(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    PrintNtoone(n-1);   
}
void PrintonetoN(int n,int k=1)
{
    if(n==0)
    {
        return;
    }
    cout<<k<<" ";
    PrintonetoN(n-1,k+1);
}
int getsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+getsum(n-1);
}
int getsumdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+getsumdigits(n/10);
}
int main() {
    int n;
    cin>>n;
    //PrintNtoone(n);
    //PrintonetoN(n);
    //cout<<getsum(n);
    cout<<getsumdigits(n);
    return 0;
}

Bool iseven(int n)
{
  if(n%2==0)
  {
    return true;
  }
  return false;
}
int main()
{
  int n=0;
  cout<<isEven(n);
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int l, int r)
{
if (l>=r)
{
return true;
}
if (str[l] != str[r]) {
return false;
}
return isPalindrome(str, l+ 1, r- 1);
}
int main()
{
string str;
cout<<"Enter a string:";
cin>>str;
int len = str.length();
if (isPalindrome(str, 0, len - 1)) {
cout << "Palindrome";
}
else {
cout << "Not Palindrome";
}
return 0;
}

//Converting string into Lowercase
#include<bits/stdc++.h>
using namespace std;
class solution:{
    public:
    string toLower(string S){
        string ss;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>=65 && S[i]<=90);
            {
                ss+=(S[i]+32);          
            }
            else{
                ss+=S[i];
            }
        }
        return  ss;
    }
};
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    string S;
    cin>>S;
    Solution ob;
    cout<<ob.Lower(S) << endl;
  }
  return 0;
}

OUTPUT:
ABCddE
abcdde
	

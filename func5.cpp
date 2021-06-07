//pass by value-->any func. and take any variables with logic then in main we call the func.
void fun(int x,int y)
{
  //logic
}
int main()
{
  int x=20;y=20;
  func(x,y);
}

//default arguments nd passing of default arguments
void compair(int n1=10;int n2=20;int n3=10)
{
  //ehich num is greater
  if(n1>n2 && n1>n3)
  {
    cout<<"n1 is great"<<"\n"; //n3=40 it will replace
  }
  else if(n2>n1 && n2>n3)
  {
    cout<<"n2 is greater"<<"\n";
  }
  else 
  {
    cout<<"n3 is greater"<<"\n";
  }
}
int main()
{
  int n1=10;
  int n2=30;
  int n3=40;
  compair(n1,n2,n3);
  return 0;
}

//NOTE:start giving value to default argument from right side onwards

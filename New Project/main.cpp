#include <iostream>

using namespace std;

template <class T>
T larger(T v1,T v2){
    return (v1>v2)?v1:v2;
}
int main()
{
  int i,j;
  float a,b;
  char c,d;
  cout<<"Enter two integers: ";
  cin>>i>>j;
  cout<<"larger is "<<larger(i,j)<<endl;
   cout<<"\n\nEnter two floating-point numbers: ";
   cin>>a>>b;
   cout<<"larger is "<<larger(a,b)<<endl;
   return 0;
}


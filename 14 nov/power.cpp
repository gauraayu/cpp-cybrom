#include <iostream>
using namespace std;
int main()
{int a ,p;
// p=power
cout<<"enter a";
cin>>a;
cout<<"enter power p";
cin>>p;
int power=1;

  for (int i = 1;i<=p;  ++i)
  {
    power=power*a;
  }
  cout<<power;
}
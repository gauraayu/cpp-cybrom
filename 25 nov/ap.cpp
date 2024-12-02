#include <iostream>
using namespace std;
int main()
{
int a,d,n,term;
cout<<"enter a";
cin>>a;
cout<<"enter d";
cin>>d;
cout<<"enter n";
cin>>n;
for (int i = 0; i <= n; i++)
{
  term=a+i*d;
  cout<<term<<endl;
}

}
#include <iostream>
using namespace std;
int main()
{
int n;
  int rev=0;
  int r;
  cout<<"enter n";
  cin>>n;
  while (n>0)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  cout<<"reversed no. is:"<<rev;
  
}
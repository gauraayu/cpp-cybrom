#include <iostream>
using namespace std;
int main()
// to make a no. divisible by both 7 and 11
{
     int a;
    cout<<"enter a";
    cin>>a;
    (a%7==0&&a%11==0)?cout<<a<<" is divisible by both 7 and 11":cout<<"is not divisible by both 7 and 11";
  return 0;
}
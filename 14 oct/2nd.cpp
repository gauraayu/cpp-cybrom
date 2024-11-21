#include <iostream>
using namespace std;
int main()
// to make a no. divisible by 2 and 3 
// by using ternery operators
{
    int a;
    cout<<"enter a";
    cin>>a;
    (a%2==0&&a%3==0)?cout<<a<<" is divisible by both 2 and 3":cout<<"is not divisible by both 2 and 3";
  return 0;
}
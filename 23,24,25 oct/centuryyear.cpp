#include <iostream>
using namespace std;
int main()
{
  int year;
  cout<<"enter year";
  cin>>year;
  if(year%400==0)
  {
    cout<<"it is a century year";
  }
  else{
    cout<<"normal year";
  }
}

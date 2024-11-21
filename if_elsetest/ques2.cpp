#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a 3 digit no.";
    cin>>num;
  if(100<=num&&num<=999){
    cout<<"it is 3 digit no.";
  }
  else{
    cout<<"it is not a 3 digit no.";
  }
}
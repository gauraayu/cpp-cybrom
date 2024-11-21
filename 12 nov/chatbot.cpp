#include <iostream>
using namespace std;
int main()
{
  int choice;
  cout<<"enter the choice 1.international 2.domestic";
  cin>>choice;
  switch (choice)
  {
  case 1:
  cout<<"enter destination 1.us 2.uk";
  cin>>choice;
  switch (choice)
  {
  case 1:
  cout<<"is prize is 100rs";
    break;
     case 2:
  cout<<"is prize is 200rs";
    break;
  
  default:
  cout<<"ii";
    break;
  }
    break;
     case 2:
  cout<<"enter destination 1.delhi 2.mumbai";
  cin>>choice;
  switch (choice)
  {
  case 1:
  cout<<"is prize is 100rs";
    break;
     case 2:
  cout<<"is prize is 200rs";
    break;
  
  default:
  cout<<"ii";
    break;
  }


  
  default:
  cout<<"ii";
    break;
  }
}
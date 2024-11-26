#include <iostream>
using namespace std;
int main()
{
  int ft,sum=0;
    cout<<"enter the 1st term";
    cin>>ft;
    
  for (int i = 1; i <= 5; i++)
  {
   ft=ft*10+1;
   sum=sum+ft;
    cout<<ft<<" ";
  }
  cout<<sum;
}
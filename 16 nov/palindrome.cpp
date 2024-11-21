#include <iostream>
using namespace std;
int main()
{
  int i,n,r; 
  int rev=0;

  cout<<"enter number";
  cin>>n;
    int original=n;
 
 for(int i=n;n>0;i++){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
 
 }
 
 
cout<<rev;
  if (rev==original)
  {
   cout<<"it is palindrome";
  }
  else{
    cout<<"not palindrome";
  }
 
}
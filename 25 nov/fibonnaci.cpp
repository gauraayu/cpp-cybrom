#include <iostream>
using namespace std;
int main()
{
 int a=0,b=1,nxt,n;
 cout<<"enter n";
 cin>>n;
//  n=np. of terms
//  cout<<"enter 1st no.";
//  cin>>a;
//   cout<<"enter 2nd no.";
//  cin>>b;

  for (int i = 1; i <=n; i++)
  {
    if (i==0)
    {
      cout<<a<<" ";
      continue;
    }
    if (i==1)
    {
       cout<<b<<" ";
       continue;

    }
    nxt=a+b;
    a=b;
    b=nxt;
    cout<<nxt<<" ";
    
    
    
  }
  

}
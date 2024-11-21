#include <iostream>
using namespace std;
int main()
{
   int n;
   int sum=0;
 cout<<"enter n";
 cin>>n;
 for(int i=1;i<n;++i){
    if(n%i==0)
    {
       
        sum=sum+i;
        
    }
 }
  if(sum==n){
    cout<<"perfect  no.";
  }
  else{
    cout<<"not perfect";
  }
}
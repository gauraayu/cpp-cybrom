#include <iostream>
using namespace std;
int main()
{
   int a=4,b=8;
  int i;
   int ans;
   int lcm;
  
  for ( i = 1; i <=a; ++i){
    
  
    if(a%i==0&&b%i==0){
        ans=i;
    }
  }

  lcm=(a*b)/ans;
  cout<<lcm;
 
}
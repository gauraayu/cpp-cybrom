#include <iostream>
using namespace std;
int main()
{
  int a=4,b=8;
  int ans;
  int i;
  for ( i = 1; i <=a; ++i){
    // hcf m 1st 1 aya then 2 aya then 4 aya toh final value 4 ayegi last m 
  
    if(a%i==0&&b%i==0){
        ans=i;
    }
  }
  cout<<ans;
  
 
  
  
}
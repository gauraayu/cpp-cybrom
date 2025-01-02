#include <iostream>
using namespace std;
int fibbo(int n ){
    if(n<=1) return n ;
    return fibbo(n-1)+fibbo(n-2);
}
int main()
{
  int i=0;
  while(i<6){
    cout<<fibbo(i);
    i++;
  }
}
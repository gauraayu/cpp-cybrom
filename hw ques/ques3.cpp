#include <iostream>
using namespace std;
int main()
{
    int number=368;
    int ld,md,fd;
    
    ld=number%10;
    cout<<ld;
  
  number=number/10;
md=number%10;
cout<<md;

number=number/10;
fd=number%10;

cout<<fd;


}
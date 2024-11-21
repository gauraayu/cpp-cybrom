#include <iostream>
using namespace std;
int main()
{
int num=2;
int i=1;
skip:
cout<<num*i;
i++;
if(i<=10){
    goto skip;
     
}

}
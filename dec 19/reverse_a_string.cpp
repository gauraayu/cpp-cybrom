#include <iostream>
using namespace std;
void rev(string &str){
    int temp;
   for(int i=0;i<6/2;i++){
    temp=str[6-i-1];
    str[6-i-1]=str[i];
    str[i]=temp;   }
}
int main()
{
 string str="ABCDEF";
 rev(str);
 cout<<str;
}
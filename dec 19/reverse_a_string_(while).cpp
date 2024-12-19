#include <iostream>
using namespace std;
void rev(string &str){
    int temp;
    int i;
   while(i<6/2){
    temp=str[6-i-1];
    str[6-i-1]=str[i];
    str[i]=temp; 
    i++;  }
}
int main()
{
 string str="ABCDEF";
 rev(str);
 cout<<str;
}
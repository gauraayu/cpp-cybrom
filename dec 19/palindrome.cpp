#include <iostream>
using namespace std;
void rev(string &str){
    int temp;
string re=str;
   for(int i=0;i<3/2;i++){
    temp=str[3-i-1];
    str[3-i-1]=str[i];
    str[i]=temp
    ;
   
    if(str==re){
        cout<<"it is pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
    
    }
}
int main()
{
 string str="ABA";
 rev(str);
 cout<<str;
}
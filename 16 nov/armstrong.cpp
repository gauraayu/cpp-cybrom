#include <iostream>
using namespace std;
int main()
{
   int n,i;
    int sum=0;
    int originl;
    cout<<"enter no.";
    cin>>n;
    originl=n;
// for ( i = n; n >0; i++)
for (; n!=0;)

{
    sum=sum+(n%10)*(n%10)*(n%10);
    n=n/10;
}
if(sum==originl){
    cout<<"it is armstrong no.";
}
else{
    cout<<"not armstrong";
}



}
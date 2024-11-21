#include <iostream>
using namespace std;
int main()
{
int l=9,s=7;
int ans ;
for (int i = l; ; i=i+l)
{
    if(i%l==0&&i%s==0){
        ans=i;
        break;
    }
}
cout<<ans;


} 
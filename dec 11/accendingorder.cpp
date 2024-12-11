#include <iostream>
using namespace std;
int main()
{
 int arr[]={20,40,90,80,100};
 for (int i = 0; i < 5; i++)
{
   if (arr[i]>arr[i+1])
   {
   cout<<"not ascending";
   return 0;
   }
   
}
cout<<"ascending";
}
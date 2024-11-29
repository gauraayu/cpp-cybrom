#include <iostream>
using namespace std;
int main()
{
  int arr[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
   for (int r = 0;r <2; r++)
{
    
   for (int c = 0; c<2; c++)
   {
   for (int d = 0; d <2; d++)
   {
     cout<<arr[r][c][d];
   }
   cout<<endl;
   }
   cout<<endl;
   
   
   
}
}
#include <iostream>
using namespace std;
int main()
{
 int arr[]={1,2,3,4,5,6};
//   updating value of third address
 arr[3]=40;
for (int i = 0; i <=5; i++)
{
    // skipping 
   if (arr[i] !=40)
   {
    cout<<arr[i]<<endl;
   }
   
}

}
#include <iostream>
using namespace std;
int main()
{
  int arr[]={1,2,3,4,5};
  int larger=arr[0];
  for (int i = 0; i <5; i++)
  {
    if(larger<arr[i]){
        larger=arr[i];
  
    
    }
  }
  cout<<larger;
  
}
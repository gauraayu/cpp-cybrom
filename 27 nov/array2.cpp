#include <iostream>
using namespace std;
int main()
{
    // dynamic array
    int n;

 cout<<"enter size of array";
 cin>>n;
int arr[n];

 for (int i = 0; i <=n; i++)
 {
    
    cin>>arr[i];
 }
//  extraction
  for (int i = 0; i <=n; i++)
 {
    
    cout<<arr[i]<<endl;
 }
 
}
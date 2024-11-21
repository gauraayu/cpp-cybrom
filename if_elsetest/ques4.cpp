#include <iostream>
using namespace std;
int main()
{
 int working_days,absent;
 double attendance;
 cout<<"enter working days and absent";
 cin>>working_days>>absent;
 attendance=(absent/working_days)*100;
 if(attendance>=85){
    cout<<"eligible to give exam";
 }
else{
    cout<<"not eligible for exam";
}
}
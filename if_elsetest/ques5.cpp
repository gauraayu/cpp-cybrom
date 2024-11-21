#include <iostream>
using namespace std;
int main()
{
    int tenure,salary;
    double bonus,total;
    cout<<"enter tennure and salary";
    cin>>tenure>>salary;
    if(tenure<=10&&salary<=100000){
        bonus=(20/salary)*100;
       total=salary+bonus;
       cout<<"total salary:"<<total;
    }
    if(tenure>10&&salary>100000){
          bonus=(10/salary)*100;
       total=salary+bonus;
       cout<<"total salary:"<<total;
    }
    else{
        cout<<"error";
    }

 
 }
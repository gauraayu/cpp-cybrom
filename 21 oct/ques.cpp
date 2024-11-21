#include <iostream>
using namespace std;
int main()
{
 int sp=1600,cp=1200,tp;
 if(sp>cp)
 {
    cout<<"profit is ";
   int  profit=sp-cp;
   cout<<profit;
   
 }
 else if (cp>sp)
 {
  cout<<"loss is ";
  int loss=cp-sp;
  cout<<loss;
 }
 else if(sp==cp)
 {
  cout<<"no loss no profit";

 }
 else
 {
  cout<<"invalid";
 }
 tp=sp+sp*15/100;
 cout<<"total price is"<<tp;

  return 0;
}
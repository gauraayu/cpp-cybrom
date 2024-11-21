#include <iostream>
using namespace std;
int main()
{
int amount;
int notes_500,notes_200,notes_100,notes_50,notes_20,notes_10,notes_5,notes_2,notes_1;
// we are putting it equal to 0 so that it does not give garbage value initial value is  0
notes_500=notes_200=notes_100=notes_50=notes_20=notes_10=notes_5=notes_2=notes_1=0;

cout<<"enter amount";
cin>>amount;
if(amount>=500){
    notes_500=amount/500;
    amount=amount%500;
    cout<<"notes of 500:"<<notes_500<<endl;

}
if(amount>=200){
    notes_200=amount/200;
    amount=amount%200;
    cout<<"notes of 200:"<<notes_200<<endl;
}
if(amount>=100)
{notes_100=amount/100;
amount=amount%100;
cout<<"notes of 100:"<<notes_100<<endl;
   
}
if(amount>=50){
    notes_50=amount/50;
    amount=amount%50;
    cout<<"notes of 50:"<<notes_50<<endl;
}
if(amount>=20){
    notes_20=amount/20;
    amount=amount%20;
    cout<<"notes of 20:"<<notes_20<<endl;
}
if(amount>=10){
    notes_10=amount/10;
    amount=amount%10;
    cout<<"notes of 10:"<<notes_10<<endl;
}
if(amount>=5){
    notes_5=amount/5;
    amount=amount%5;
    cout<<"notes of 5:"<<notes_5<<endl;
}
if(amount>=2){
    notes_2=amount/2;
    amount=amount%2;
    cout<<"notes of 2:"<<notes_2<<endl;
}
if(amount>=1){
    notes_1=amount/1;
    
    cout<<"notes of 1:"<<notes_1<<endl;
}

}
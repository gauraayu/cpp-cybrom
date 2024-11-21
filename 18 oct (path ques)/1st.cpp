#include <iostream>
using namespace std;
int main()
{
    int p;
    cout<<"enter path p";
    cin>>p;
    if(p==1){
        cout<<"enter path p";
         cin>>p;
        if(p==2){
            cout<<"enter path p";
             cin>>p;
         if(p==3){
            cout<<"enter path p";
            cin>>p;
        if(p==4){
            cout<<"correct path";
        }
        else{
            cout<<"wrong path";
        }
        }
         else if(p==4){
            cout<<"correct path";
        }
        
        
        
        else{
            cout<<"wrong path";
        }
        }
        
        
        else if(p==3){
         cout<<"enter path p";
        cin>>p;
         if(p==4){
            cout<<"correct path";
        }
         

        else if(p==2){
         cout<<"enter path p";
        cin>>p;
        if(p==4){
           cout<<"correct path"; 
        }
        else{
            cout<<"wrong path";
        }
        }
        }
        
        else if(p==4){
         cout<<"correct path";
           
        }
        else{
            cout<<"wrong path";
        }

    }
    else{
        cout<<"wrong path";
    }
  return 0;
}
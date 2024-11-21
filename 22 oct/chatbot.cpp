#include <iostream>
using namespace std;
int main()
{
    string place;

    cout << "enter place \n 1.international \n 2. domestic ";
    cin >> place;
    if (place == "international")
    {
        cout << "enter place \n 1.uk \n 2. usa \n3.india" <<endl;
        cin >> place;
        if (place == "uk")
        {
            cout << "1000rs";
        }
        else if (place == "usa")
        {
            cout << "100rs";
        }
        else if (place == "india")
        {
            cout << "2300rs";
        }
        else
        {
            cout << "envalid choice";
        }
    }
    else if (place == "domestic")
    {
        cout << "enter place \n 1.bhopal \n 2. ujjain \n3.indore";
        cin >> place;
        if (place == "bhopal")
        {
            cout << "3200rs";
        }
        else if (place == "ujjain")
        {
            cout << "1060rs";
        }
        else if (place == "indore")
        {
            cout << "10200rs";
        }
    }
    else
    {
        cout << "invalid input";
    }
}
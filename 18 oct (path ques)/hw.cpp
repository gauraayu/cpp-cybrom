#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "enter path p";
    cin >> p;
    if (p == 1)
    {
        cout << "enter path p";
        cin >> p;
// now taking path 1 to 2
        if (p == 2)
        {
            cout << "enter path p";
            cin >> p;
            // taking path 1-2-3-4
            if (p == 3)
            {
                cout << "enter path p";
                cin >> p;
                if (p == 4)
                {
                    cout << "right path";
                }
                else
                {
                    cout << "wrong path";
                }
            }
            // taking 1-2-4
            else if (p == 4)
            {
                cout << "right path";
            }
            else
            {
                cout << "wrong path";
            }
        }

// taking path 1-3
        else if (p == 3)
        {
            cout << "enter path p";
            cin >> p;
            // taking path 1- > 3-> 2-> =4
            if (p == 2)
            {
                cout << "enter path p";
                cin >> p;
                if (p == 4)
                {
                    cout << "right path";
                }
                else
                {
                    cout << "wrong path";
                }
            }
            // taking 1-> 3-> 4
            else if (p == 4)
            {
                cout << "right path";
            }
        }
//    taking 1-4
        else if (p == 4)
        {
            cout << "right path";
        }
        else
        {
            cout << "wrong path";
        }
    }
    else
    {
        cout << "wrong path";
    }
}
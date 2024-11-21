#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter num 1 and num 2";
    cin >> num1 >> num2;
    if (num1 + num2 == 9 || num1 - num2 == 9 || num1 % num2 == 9 || num1 / num2 == 9 || num1 * num2 == 9)
    {
        cout << "outcome is 9";
    }
    else
    {
        cout << "outcome is not 9";
    }
}
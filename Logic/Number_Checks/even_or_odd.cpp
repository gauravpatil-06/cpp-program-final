#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter any number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even number = " << num;
    }
    else
    {
        cout << "Odd number = " << num;
    }

    return 0;
}

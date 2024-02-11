#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter any two numbers: ";
    cin >> a >> b;

    if (a < b)
    {
        cout << "Smallest Number: " << a;
    }
    else
    {
        cout << "Smallest Number: " << b;
    }

    return 0;
}

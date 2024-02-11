#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter any two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << "Greatest Number: " << a;
    }
    else
    {
        cout << "Greatest Number: " << b;
    }

    return 0;
}

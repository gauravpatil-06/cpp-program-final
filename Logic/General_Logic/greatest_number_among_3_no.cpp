#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter any three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Greatest Number: " << a;
        }
        else
        {
            cout << "Greatest Number: " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Greatest Number: " << b;
        }
        else
        {
            cout << "Greatest Number: " << c;
        }
    }

    return 0;
}

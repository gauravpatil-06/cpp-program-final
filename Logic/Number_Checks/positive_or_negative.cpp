#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "Enter any number: ";
    cin >> no;

    if (no > 0)
    {
        cout << "Positive Number: " << no;
    }
    else
    {
        cout << "Negative Number: " << no;
    }

    return 0;
}

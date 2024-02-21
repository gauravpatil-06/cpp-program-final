#include <iostream>

using namespace std;

int main()
{
    int a[5][5], b[5][5], c[5][5];
    int i, j;

    cout << "Enter 1st matrix array element: ";

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter 2nd matrix array element: ";

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Addition of matrix: ";

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }

        cout << "\nAddition of matrix = " << c[i][j];
    }

    return 0;
}

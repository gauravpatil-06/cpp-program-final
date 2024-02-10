#include <iostream>

using namespace std;

int main()
{
    float pi = 3.14, r, area;

    cout << "Enter radius: ";
    cin >> r;

    area = pi * r * r;
    cout << "Area of circle = " << area;

    return 0;
}

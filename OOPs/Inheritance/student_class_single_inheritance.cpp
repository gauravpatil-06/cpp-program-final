#include <iostream>

using namespace std;

class student
{
protected:
    int roll_no;
    char name[20];
};

class marks : public student
{
protected:
    int m1, m2, m3;
    float total, per;

public:
    void accept()
    {
        cout << "\nEnter student roll no: ";
        cin >> roll_no;
        cout << "\nEnter student name: ";
        cin >> name;
        cout << "\nEnter m1 marks: ";
        cin >> m1;
        cout << "\nEnter m2 marks: ";
        cin >> m2;
        cout << "\nEnter m3 marks: ";
        cin >> m3;
    }

    void display()
    {
        total = (m1 + m2 + m3);
        per = (total / 3);
        cout << "\nStudent roll no: " << roll_no;
        cout << "\nStudent name: " << name;
        cout << "\nTotal marks: " << total;
        cout << "\nPercentage: " << per;
    }
};

int main()
{
    marks m;

    m.accept();
    m.display();

    return 0;
}

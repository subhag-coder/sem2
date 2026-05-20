#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    float marks;

public:
    // Parameterized Constructor
    Student(int r, float m)
    {
        roll_no = r;
        marks = m;
    }

    // Function to display details
    void print()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Array of 3 Student objects
    Student s[3] = {
        Student(101, 85.5),
        Student(102, 90.0),
        Student(103, 78.5)
    };

    // Calling print() function through objects
    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << " Details:" << endl;
        s[i].print();
    }

    return 0;
}
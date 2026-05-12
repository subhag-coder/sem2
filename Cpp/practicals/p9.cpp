#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n = "") : name(n) {}

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};


class Student : public Person {
private:
    string course;
    int marks;
    int year;

public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    void display() override {
        cout << "Student Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};


class Employee : public Person {
private:
    string department;
    double salary;

public:
    Employee(string n, string d, double s) : Person(n), department(d), salary(s) {}

    void display() override {
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person* p;

    Student s("Ram", "Computer Science", 85, 2026);
    p = &s;
    cout << "\n--- Student Details ---\n";
    p->display();


    Employee e("Riya", "HR", 50000);
    p = &e;
    cout << "\n--- Employee Details ---\n";
    p->display();

    return 0;
}

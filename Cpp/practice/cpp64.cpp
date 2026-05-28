#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
    int rollno;
public:

    Student(string n, int a, int r) : Person(n, a) {
        rollno = r;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Ram", 19, 101);
    s1.display();
    return 0;
}

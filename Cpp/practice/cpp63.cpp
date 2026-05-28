#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
    double basic;
    double allowances;
public:
    FullTimeEmployee(double b, double a) : basic(b), allowances(a) {}
    void calculateSalary() override {
        cout << "Total salary of full-time employee: " << basic + allowances << endl;
    }
};

class PartTimeEmployee : public Employee {
    double hours;
    double rate;
public:
    PartTimeEmployee(double h, double r) : hours(h), rate(r) {}
    void calculateSalary() override {
        cout << "Total salary of part-time employee: " << hours * rate << endl;
    }
};

int main() {
    Employee* e;

    FullTimeEmployee f(20000, 5000);
    PartTimeEmployee p(40, 200);

    e = &f;
    e->calculateSalary();

    e = &p;
    e->calculateSalary();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    int empID;
    string empName;
    double basicSalary;

public:
    Employee(int id, string name, double salary)
        : empID(id), empName(name), basicSalary(salary) {}

    virtual void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }

    virtual double calculateSalary() {
        return basicSalary;
    }

    int getID() { return empID; }

    virtual ~Employee() {}
};

class RegularEmployee : public Employee {
private:
    double bonus;

public:
    RegularEmployee(int id, string name, double salary, double b)
        : Employee(id, name, salary), bonus(b) {}

    void display() override {
        cout << "Regular Employee Details:" << endl;
        cout << "ID: " << empID << ", Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << ", Bonus: " << bonus << endl;
    }

    double calculateSalary() override {
        return basicSalary + bonus;
    }
};


class Intern : public Employee {
private:
    double stipend;

public:
    Intern(int id, string name, double salary, double s)
        : Employee(id, name, salary), stipend(s) {}

    void display() override {
        cout << "Intern Details:" << endl;
        cout << "ID: " << empID << ", Name: " << empName << endl;
        cout << "Stipend: " << stipend << endl;
    }

    double calculateSalary() override {
        return stipend;  
    }
};

int main() {
    Employee* employees[3]; 
    int count = 0;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Regular Employee\n";
        cout << "2. Add Intern\n";
        cout << "3. Display All Employees\n";
        cout << "4. Search Employee by ID\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            if (count < 3) {
                int id; string name; double salary, bonus;
                cout << "Enter ID, Name, Basic Salary, Bonus: ";
                cin >> id >> name >> salary >> bonus;
                employees[count++] = new RegularEmployee(id, name, salary, bonus);
            } else {
                cout << "Array full!" << endl;
            }
            break;
        }
        case 2: {
            if (count < 3) {
                int id; string name; double salary, stipend;
                cout << "Enter ID, Name, Basic Salary, Stipend: ";
                cin >> id >> name >> salary >> stipend;
                employees[count++] = new Intern(id, name, salary, stipend);
            } else {
                cout << "Array full!" << endl;
            }
            break;
        }
        case 3: {
            for (int i = 0; i < count; i++) {
                employees[i]->display();
                cout << "Total Salary/Stipend: " << employees[i]->calculateSalary() << endl;
                cout << "-----------------------------" << endl;
            }
            break;
        }
        case 4: {
            int searchID;
            cout << "Enter Employee ID to search: ";
            cin >> searchID;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (employees[i]->getID() == searchID) {
                    employees[i]->display();
                    cout << "Total Salary/Stipend: " << employees[i]->calculateSalary() << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Employee not found!" << endl;
            break;
        }
        case 5:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    for (int i = 0; i < count; i++) {
        delete employees[i];
    }

    return 0;
}
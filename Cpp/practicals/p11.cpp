#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string studentClass;
    int year;
    double totalMarks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(); // clear newline
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Class: ";
        getline(cin, studentClass);
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }


    void writeToFile(ofstream &fout) {
        fout << rollNo << "," << name << "," << studentClass << ","
             << year << "," << totalMarks << endl;
    }


    void readFromFile(string line) {
        string values[5];
        int field = 0;
        string temp = "";

        for (char ch : line) {
            if (ch == ',') {
                values[field++] = temp;
                temp = "";
            } else {
                temp += ch;
            }
        }
        values[field] = temp;

        rollNo = stoi(values[0]);
        name = values[1];
        studentClass = values[2];
        year = stoi(values[3]);
        totalMarks = stod(values[4]);
    }

    void display() {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Class: " << studentClass
             << ", Year: " << year
             << ", Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student students[5];

    ofstream fout("students.txt");
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
        students[i].writeToFile(fout);
    }
    fout.close();

    ifstream fin("students.txt");
    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\n--- Student Records Retrieved from File ---\n";
    string line;
    while (getline(fin, line)) {
        Student s;
        s.readFromFile(line);
        s.display();
    }
    fin.close();

    return 0;
}
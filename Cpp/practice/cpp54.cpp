#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    float marks;
    public:
    Student(){
        rollno=0;
        name="";
        marks=0.0;
    }
    Student(int roll,string nam,float mark){
        rollno=roll;
        name=nam;
        marks=mark;
    }
    void display(){
        cout<<"Roll No.:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Total:"<<marks<<endl;
    }
};
int main(){
    Student s1(101,"Ram Subhag Yadav",450);
    Student s2(102,"Deepak",400);
    s1.display();
    s2.display();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class Student{
    string name;
    public:
    int age;
    void input(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
    } 
    void output(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    void chk(){
        if(age>=18){
            cout<<"You are eligible to vote.\n";
        } 
        else{
            cout<<"You are not eligible to vote currently.\n";
        }
    }
};

int main(){
    Student s1, s2, s3, s4, s5, s6;
    s1.input();
    s1.output();
    s1.chk();
    s2.input();
    s2.output();
    s2.chk();
    s3.input();
    s3.output();
    s3.chk();
    s4.input();
    s4.output();
    s4.chk();
    s5.input();
    s5.output();
    s5.chk();
    s6.input();
    s6.output();
    s6.chk();
    return 0;
}
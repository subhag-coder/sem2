#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int age;
    string name;
    
    public:
    void input(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void output(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
    void check(){
        if (age>17){
            cout<<"\nEligible to vote.\n";
        }
        else{
            cout<<"\nNot Eligible to vote!\n";
        }
    }
};

int main(){
    Student s1, s2, s3;
    s1.input();
    s2.input();
    s3.input();
    s2.output();
    s2.check();
    s3.output();
    s3.check();
    s1.output();
    s1.check();
    return 0;
}

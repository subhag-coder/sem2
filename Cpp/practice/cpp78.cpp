#include <iostream>
using namespace std;
class Person{
    private:
    string name;
    public:
    Person(string n){
        name=n;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
    }
};
int main(){
    Person p("John");
    p.display();
    return 0;
}
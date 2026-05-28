#include <iostream>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout<<"Base Class function"<<endl;
    }
};
class Derived:public Base{
    public:
    void show(){
        cout<<"Derived class functioin"<<endl;
    }
};
int main(){
    Base *p;
    Derived d;
    p=&d;
    p->show();
    return 0;
}

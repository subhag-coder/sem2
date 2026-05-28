#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
    }
};
class Rectangle:public Shape{
    public:
    void area(){
        cout<<"Area of Rectangle";
    }
};
class Circle: public Shape{
    public:
    void area(){
        cout<<"Area of Circle";
    }
};
int main(){
    Shape *a;
    Rectangle r;
    a=&r;
    a->area();
    return 0;
}
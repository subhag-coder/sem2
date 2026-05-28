#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int width;
    public:
    Rectangle(){
        length=0;
        width=0;
    }
    Rectangle(int l, int w){
        length=l;
        width=w;
    }
    Rectangle(const Rectangle &r){
        length=r.length;
        width=r.width;
    }
    void display(){
        cout<<"Length:"<<length<<" , width:"<<width<<endl;
    }
};
int main(){
    Rectangle rect1(10,5);
    Rectangle rect2=rect1;
    rect2.display();
    return 0;
}
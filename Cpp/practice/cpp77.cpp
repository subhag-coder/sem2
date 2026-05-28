#include <iostream>
using namespace std;
class Example{
    static int count;
    public:
    Example(){
        count++;
    }
    void display(){
        cout<<"Count: "<<count<<endl;
    }
};
int Example::count=0;
int main(){
    Example obj1, obj2;
    obj1.display();
    obj2.display();
    return 0;
}
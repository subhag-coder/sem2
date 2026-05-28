#include <iostream>
using namespace std;
class Addition{
    public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};
int main(){
    Addition obj;
    cout<<"Sum of two integers:"<<obj.add(5,10)<<endl;
    cout<<"Sum of two floats:"<<obj.add(2.5,3.5)<<endl;
    cout<<"Sum of three integers:"<<obj.add(1,2,3)<<endl;
    return 0;
    
}
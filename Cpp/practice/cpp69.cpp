#include <iostream>
using namespace std;
template <typename T>
class Calculator{
    public:
    void add(T a, T b){
        cout<<"Sum of both number is "<<a+b<<endl;
    }
    void substract(T n, T m){
        cout<<"Substraction of both number is "<<n-m<<endl;
    }
};
int main(){
    Calculator<int> a;
    a.add(3,4);
    a.substract(6,3);
    return 0;
}
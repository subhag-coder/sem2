#include <iostream>
using namespace std;
class Maths{
    public:
    void add(int n,int m){
        cout<<n+m<<endl;
    }
    void add(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    void add(double a, double b){
        cout<<a+b<<endl;
    }
};
int main(){
    Maths s1;
    s1.add(1,2,3);
    s1.add(2.3,4.5);
    s1.add(3,88);
    return 9;
}
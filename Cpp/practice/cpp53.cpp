#include <iostream>
using namespace std;
class Complex{
    private:
    int real,imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r, int i){
        real=r;
        imag=i;
    }
    Complex add(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main (){
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3;
    c3=c1.add(c2);
    cout<<"First Complex Number:";
    c1.display();
    cout<<"second Complex Number:";
    c2.display();
    cout<<"Sum of Complex Number:";
    c3.display();
    return 0;
}
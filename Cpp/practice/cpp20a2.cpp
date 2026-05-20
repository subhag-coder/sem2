//Question (2):
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first integer a:";
    cin>>a;
    cout<<"Enter Second integer b:";
    cin>>b;
    a=b+a;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b;
    return 0;
}
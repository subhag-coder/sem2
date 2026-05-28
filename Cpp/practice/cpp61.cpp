#include <iostream>
using namespace std;
template <typename T1, typename T2>
void swapValues(T1 a, T2 b){
    T2 temp=a;
    a=b;
    b=temp;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;
}
int main(){
    swapValues('A','B');
    swapValues(4,10);
    return 0;
}
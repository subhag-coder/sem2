#include <iostream>
using namespace std;
int main(){
   int x=10;
   int* ptr=&x;
   *ptr=*ptr+5;
   cout<<"Value of x: "<<x<<endl;
   cout<<"Value at ptr: "<<*ptr<<endl;
   return 0;
}
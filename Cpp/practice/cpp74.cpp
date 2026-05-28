#include <iostream>
using namespace std;

int main(){
   int a=5;
   int b=2;
   float result1=a/b;
   float result2=(float)a/b;
   float result3=a/(float)b;
   float result4=(float)(a/b);
   cout<<"result1:"<<result1<<endl;
   cout<<"result2:"<<result2<<endl;
   cout<<"result3:"<<result3<<endl;
   cout<<"result4:"<<result4<<endl;
   return 0;
}
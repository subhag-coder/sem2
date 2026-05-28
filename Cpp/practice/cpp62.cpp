#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of numerator (a) and denominator (b):";
    cin>>a>>b;
    try{
        if(b==0){
            throw "Error denominator should not be zero!";
        }
        else{
            cout<<"Division value of a and b:"<<a/b;
        }
    }
    catch(const char* e){
        cout<<e;
    }
    return 0;
}
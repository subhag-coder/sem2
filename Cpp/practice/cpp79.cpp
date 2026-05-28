#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=0;
    try{
        if(b==0){
            throw "Division by zero error!";
        }
        else{
            cout<<a/b<<endl;
        }
    }
    catch (const char* e){
        cout<<"Exception caught:"<<e<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int fact(int n){
    if (n==1){
        return 1;
    }
    else{
    return n*fact(n-1);
    }
}

int main(){
    int n;
    int r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int k=n-r;
    float nume=fact(n);
    float deno=fact(k);
    float c=nume/deno;
    cout<<"The result of given combination:"<<c;
    return 0;
}
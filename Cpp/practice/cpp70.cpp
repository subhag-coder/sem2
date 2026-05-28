#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int terms;
    cout<<"Enter number of terms:";
    cin>>terms;
    cout<<"Fibonacci Series:";
    for(int i=0; i<terms; i++){
        cout<<fibo(i)<<" ";
    }
    cout<<endl;
    return 0;
}
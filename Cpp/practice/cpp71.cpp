#include <iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n%10+(n/10);
    }
}
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<"sum of digits:"<<sum(a);
    return 0;
}
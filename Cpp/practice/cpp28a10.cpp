//Question (10):
#include <iostream>
using namespace std;
int pwr(int x, int y){
    int result=1;
    for (int i=1; i<=y; i++){
        result=result*x;
    }
    return result;
}
bool chkArmstr(int x){
    int original=x;
    int sum=0;

    while (x>0){
        int digit=x%10;
        sum=sum+pwr(digit,3);
        x=x/10;
    }
    return (sum==original);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    cout<<"Armstrong numbers upto (n) \n";

    for (int i=100; i<=n; i++){
        if (chkArmstr(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
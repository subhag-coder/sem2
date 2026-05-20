//Question (9):
#include <iostream>
using namespace std;
bool chkPerf(int n){
    int sum=0;
    for (int i=1; i<n; i++){
        if( n%i==0){
            sum=sum+i;
        }
    }
    if (n==sum){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter a number to check perfect or not:";
    cin>>n;
    if (chkPerf(n)){
        cout<<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
}
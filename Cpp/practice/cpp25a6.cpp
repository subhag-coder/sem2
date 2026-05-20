//Question (6):
#include <iostream>
using namespace std;
int pwr(int x, int y){
    int result=1;
    for (int i=1; i<=y; i++){
        result=result*x;
    }
    return result;
}

int main() {
    int n, m;
    cout<<"Enter number (x):";
    cin>>n;
    cout<<"Enter how many powers (y):";
    cin>>m;
    cout<<"Calculated exponetial Value (...upto x^y):";
    for (int i=1; i<=m; i++){
        cout<<pwr(n, i)<<" ";
    }
    return 0;
}
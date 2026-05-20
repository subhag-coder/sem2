#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    float sum=0.0;
    cout<<"Enter the no. of term:";
    cin>>n;
    for (int i=1; i<=n; i++){
        if (i%2==0)
        sum=sum-(1.0/pow(i,i));
        else
        sum=sum+(1.0/pow(i,i));
    }
    cout<<sum;
    return 0;
}
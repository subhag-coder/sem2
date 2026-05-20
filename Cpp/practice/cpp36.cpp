#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int sum1=0, sum2=0;
    int n;
    float x;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of x:";
    cin>>x;
    for (int i=1; i<=n; i+4){
        if (i%2!=0){
            float fact=1;
            for (int j=1; j<=i; j++){
                fact=fact*j;
            }
            sum1=sum1+(pow(x,i))/fact;
        }
    }
    for (int i=3; i<=n; i+4){
        if (i%2!=0){
            float fact=1;
            for (int j=1; j<=i; j++){
            }
            sum2=sum2+(pow(x,i))/fact;
        }
    }
    float result=sum1-sum2;
    cout<<"Result="<<result;
    return 0;
}
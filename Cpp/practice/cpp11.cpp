#include <iostream>
#include <cmath>
using namespace std;
float series(int n){
    float sum=0.0;
    for (int i=1; i<=n; i++){
        if (i%2==0)
        sum=sum-1.0/pow(i,i);
        else
        sum=sum+1.0/pow(i,i);
    return sum;
    }
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
float k=series(n);
cout<<k;
return 0;
}
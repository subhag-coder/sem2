#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,n;
    double sum=0.0;
    cout<<"Enter starting value (x)";
    cin>>x;
    cout<<"Enter no. of terms:";
    cin>>n;
    
    for(int i=0; i<n; i++){
        int term=x+i;
        sum=sum+1.0/pow(term,term);
    }
    cout<<"Sum of series:"<<sum;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char* argv[]){
    int x=stoi(argv[1]);
    int n=stoi(argv[2]);
    float total=0;
    float sum1=0;
    float sum2=0;
    for(int i=1; i<=n; i+=4){
        float f1=1;
        for(int j=1; j<=i; j++){
            f1*=j;
        }
        sum1+=pow(x,i)/f1;
    }
    for(int i=3; i<=n; i+=4){
        float f2=1;
        for(int j=1; j<=i; j++){
            f2*=j;
        }
        sum2+=pow(x,i)/f2;
    }
    total=sum1-sum2;
    cout<<"Sum of series:"<<total;
    return 0;
}

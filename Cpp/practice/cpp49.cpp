#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[]){
    int x=stoi(argv[1]);
    int n=stoi(argv[2]);
    double result=0;
    for (int i=1; i<=n; i++){
        double fact=1;
        for(int j=1; j<=i; j++){
            fact*=j;
        }
        double term=pow(x,i)/fact;
        if(i%2==0){
            result-=term;
        }
        else{
            result+=term;
        }
    }
    cout<<result;
    return 0;
}
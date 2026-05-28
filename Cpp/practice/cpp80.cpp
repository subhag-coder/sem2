#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char* argv[]){
    float x=stof(argv[1]);
    float n=stof(argv[2]);
    float sum=0;
    for(int i=0; i<=n-1; i++){
        sum+=pow(x,i)/(i+1);
    }
    cout<<"Sum of series:"<<sum;
    return 0;
}
//Question (4):
#include <iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter positive integer:";
    while (true){
        cin>>num;
        if (num<0){
            break;
        }
        sum=sum+num;
    }
    cout<<"Sum of all positive numbers="<<sum;
    return 0;
}

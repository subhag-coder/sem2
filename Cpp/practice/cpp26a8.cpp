//Question (8):
#include <iostream>
using namespace std;
bool chkPalin(int num){
    int original=num;
    int rev=0;
    while (num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if (rev==original){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter a number to check palindrome:";
    cin>>num;

    if (chkPalin(num)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
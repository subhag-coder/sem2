#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. to check wether is a palindrome or not:";
    cin>>n;
    int orig=n;
    int result=0;
    while(n>0){
        int r=n%10;
        result=result*10+r;
        n=n/10;
    }
    if(orig==result){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}
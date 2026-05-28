#include <iostream>
#include <string>
using namespace std;
int main(){
    string k;
    cout<<"Enter the word to check weather is palindrome or not:";
    getline(cin,k);
    int l=k.size();
    string result="";
    for(int i=l-1; i>=0; i--){
        result+=k[i];
    }
    if(result==k){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome.";
    }
    return 0;
}
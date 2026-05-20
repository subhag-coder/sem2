#include <iostream>
using namespace std;
int main(){
    char str1[100], str2[100];
    int count1=0, count2=0;
    cout<<"Enter first string:";
    cin.getline(str1,100);
    cout<<"Enter second string:";
    cin.getline(str2,100);
    
    while (str1[count1]!='\0'){
        count1++;
    }
    cout<<"Length of first string:"<<count1;

    while (str2[count2]!='\0'){
        count2++;
    }
    cout<<"\nLength of second string:"<<count2<<endl;

    if (count1>count2){
        cout<<str1;
    }
    else if (count2>count1){
        cout<<str2;
    }
    else {
        cout<<"\nBoth are equals.";
    }
    return 0;
}
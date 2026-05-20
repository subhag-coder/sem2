#include <iostream>
using namespace std;
int main(){
    char str[100];
    int count=0;
    cout<<"Enter:";
    cin.getline(str,100);
    while (str[count]!='\0'){
        count=count+1;
    }
    cout<<count;
    return 0;
}
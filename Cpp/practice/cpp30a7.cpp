#include <iostream>
using namespace std;
bool chkDig(char ch){
    if (ch>='0' && ch<='9'){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if (chkDig(ch)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
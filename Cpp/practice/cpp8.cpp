#include <iostream>
using namespace std;
int x=40;
int main(){
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    cout<<x<<endl;
}

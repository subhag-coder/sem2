#include <iostream>
using namespace std;
int main(){
    int x,y;
    int p=1;
    cin>>x>>y;
    for (int i=1; i<=y; i++)
    p=p*x;
    cout<<p;
    return 0;
}
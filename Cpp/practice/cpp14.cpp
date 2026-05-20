#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i=1; i<=n; i++){      //reverse:  for (int i=1; 1>=1; i--)
        for (int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
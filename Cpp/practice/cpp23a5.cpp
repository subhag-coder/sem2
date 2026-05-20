//Question (5):
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. to finds its prime factors:";
    cin>>n;
    cout<<"Prime factors:";
    for (int i=2; i<=n; i++){
        while (n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    return 0;
}
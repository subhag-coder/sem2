//Question (3):
#include <iostream>
using namespace std;
int main(){
    char choice;
    int n, sum=0;
    cout<<"A: For odd natural no. and thier sum.\n";
    cout<<"B: For even natural no. and thir sum.\n";
    cout<<"Enter choice A or B:";
    cin>>n;

    cout<<"Enter value of n:";
    cin>>n;
    if (choice=='A' || choice=='a'){
        cout<<"Natural odd no:";
        for (int i=1; i<=n; i++){
            int odd=2*i-1;
            sum=sum+odd;
            cout<<odd<<" ";
        }
        cout<<"\nSum="<<sum;
    }
    else if (choice=='B' || choice=='b'){
        cout<<"First even natural no.:";
        for (int i=1; i<=n; i++){
            int even=2*i;
            cout<<even<<" ";
            sum=sum+even;
        }
        cout<<"\nSum="<<sum;
    }
    else {
        cout<<"WRONG INPUT!";
    }
    return 0;
}
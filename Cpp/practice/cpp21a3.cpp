#include <iostream>
using namespace std;
int main(){
    char choice;
    int n, sum=0;
    cout<<"A:For Odd natural no. and their sum.\n";
    cout<<"B:For even natural no. and thier sum.\n";
    cout<<"Enter choice A or B:";
    cin>>choice;
    
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
        cout<<"First"<<n<<"even natural numbers are:\n";
        for (int i=1; i<=n; i++){
            int even=2*i;
            cout<<even<<" ";
            sum=sum+even;
        }
        cout<<"\nSum="<<sum;
    }

    else{
        cout<<"WRONG INPUT!";
    }
    return 0;
}
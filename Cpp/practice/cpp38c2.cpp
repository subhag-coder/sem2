#include <iostream>
using namespace std;
class Arr{
    int arr1[10],arr2[10],sum[10];
    public:
    int n;
    void input(){
        cout<<"Enter the no. of elements:";
        cin>>n;
        cout<<"Enter the elements of 1st array.\n";
        for (int i=0; i<n; i++){
            cout<<"Enter the element"<<i+1<<":";
            cin>>arr1[i];
        }
        cout<<"Enter the elements of 2nd array.\n";
        for (int i=0; i<n; i++){
            cout<<"Enter the element"<<i+1<<":";
            cin>>arr2[i];
        }
    }
    void add(){
        for (int i=0; i<n; i++){
            sum[i]=arr1[i]+arr2[i];
        }
    }
    void output(){
        cout<<"Sum of both arrays: ";
        for (int i=0; i<n; i++){
            cout<<sum[i]<<" ";
        }
    }
};

int main(){
    Arr a1;
    a1.input();
    a1.add();
    a1.output();
    return 0;
}
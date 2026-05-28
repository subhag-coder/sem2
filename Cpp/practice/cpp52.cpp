#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    int small=arr[0];
    int large=arr[0];
    for(int i=1; i<n; i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    for(int i=1; i<n; i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    cout<<"Smallest:"<<small<<endl;
    cout<<"Largest: "<<large<<endl;
    return 0;
}
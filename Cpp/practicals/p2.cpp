#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int arr2[n];
    int m=0;
    for (int i=0; i<n; i++){
        bool found=false;
        for (int j=0; j<m; j++){
            if(arr[i]==arr2[j]){
                found=true;
                break;
            }
        }
        if(!found){
            arr2[m]=arr[i];
            m++;
        }
    }
    cout<<"Array with unique elements:";
    for (int i=0; i<m; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
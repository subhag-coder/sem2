#include <iostream>
using namespace std;
int sortArray(int arr[],int n, int choice){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            // Ascending
            if(choice==1 && arr[i]>arr[j]){
                int temp=arr[i];
                arr[j]=temp;
            }
            //Descending
            if(choice==2 && arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int n, choice;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\nChoose Sorting order:\n";
    cout<<"1. Ascending\n";
    cout<<"2. Decending \n";
    cout<<"Enter your choice:";
    cin>>choice;
    sortArray(arr,n,choice);

    cout<<"\nSorted array:";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
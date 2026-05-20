#include <iostream>
using namespace std;

template <class T>
T maxArr(T arr[], int n){
    int i;
    T maxm;
    maxm=arr[0];
    for(i=0; i<n; i++){
        if(maxm<arr[i]){
            maxm=arr[i];
        }
    }
    return(maxm);
}
int main(){
    int iar[]={5,4,8,2,9};
    char carr[]={'z','a','r','b','f'};
    double darr[]{3,3,5,5,2,2,1,1,4,4};
    cout<<"Maximum integer value is:"<<maxArr(carr,5)<<endl;
    cout<<"Maximum double value is:"<<maxArr(darr,5)<<endl;
    return 0;
}
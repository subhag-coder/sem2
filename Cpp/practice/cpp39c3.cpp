#include <iostream>
using namespace std;
class Matrix{
    int arr1[10][10], arr2[10][10], sum[10][10], sub[10][10];
    public:
    int n;
    void input(){
        cout<<"Enter no. of rows and column: ";
        cin>>n;
        cout<<"Enter first matrix\n";
        for (int i=0; i<n; i++){
            cout<<"Enter the"<<i+1<<"row elements.\n";
            for(int j=0; j<n; j++){
                cout<<"Enter the element"<<j+1<<":";
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter the second matrix:\n";
        for (int i=0; i<n; i++){
            cout<<"Enter the"<<i+1<<"row elements.\n";
            for(int j=0; j<n; j++){
                cout<<"Enter the element"<<j+1<<":";
                cin>>arr2[i][j];
            }
        }
    }
    void add(){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                sum[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
    }
    void subs(){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                sub[i][j]=arr1[i][j]-arr2[i][j];
            }
        }
        cout<<"Substraction of two matrix:\n";
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout<<sub[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    void output(){
        cout<<"Addition of two square matrix:\n";
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Matrix m1;
    m1.input();
    m1.add();
    m1.subs();
    m1.output();
    return 0;    
}
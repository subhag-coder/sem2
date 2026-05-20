#include <iostream>
using namespace std;
class Matrix{
    int a[10], b[10], sum[10];
    int r;
public:
    void input(){
        cout<<"Enter no. of elements:";
        cin>>r;
        cout<<"Enter the elements of first array:\n";
        for (int i=0; i<r; i++){
            cout<<"Enter the element"<<i+1<<":";
            cin>>a[i];
        }
        cout<<"Enter the elments of second array:\n";
        for (int i=0; i<r; i++){
            cout<<"Enter the element"<<i+1<<":";
            cin>>b[i];
        }
    }
    void add(){
        for (int i=0; i<r; i++){
            sum[i]=a[i]+b[i];
        }
    }
    void display(){
        for (int i=0; i<r; i++){
            cout<<sum[i]<<" ";
        }
    }

};

int main(){
    Matrix m,n;
    m.input();
    m.add();
    m.display();
    return 0;
}
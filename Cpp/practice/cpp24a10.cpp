//Question (11a)
#include <iostream>
using namespace std;
int main(){
    for (int i=1; i<=10; i++){
        if (i==5 || i==9){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}

//Question (11b)
#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the no. from(x):";
    cin>>x;
    cout<<"\nEnter the no. upto (y):";
    cin>>y;
    cout<<"\nEnter no. you want to skip (z):";
    cin>>z;

    for (int i=x; i<=y; i++){
        if (i==z){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}

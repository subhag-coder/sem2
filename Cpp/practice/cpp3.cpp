#include <iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3;
    float per;
    cout<<"Enter marks of sub1:";
    cin>>sub1;
    cout<<"Enter marks of sub2:";
    cin>>sub2;
    cout<<"Enter marks of sub3:";
    cin>>sub3;
    int total=sub1+sub2+sub3;
    per=(total/300.0)*100;
    cout<<"Percentage:"<<per<<endl;
    if (per>=90){
        cout<<"Grade:"<<"A+"<<endl;
    }
    else if (per>=85){
        cout<<"Grade:"<<'A'<<endl;
    }
    else if (per>=70){
        cout<<"Grade:"<<'B'<<endl;
    }
    else if (per>=60){
        cout<<"Grade:"<<'C'<<endl;
    }
    else {
        cout<<"Grade:"<<"F (Fail)";
    }
    return 0;
}
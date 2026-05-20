#include <iostream>
using namespace std;

float percentage(int m1, int m2, int m3){
    int total=m1+m2+m3;
    return (total/300.0)*100;
}

char grade(float per){
    if (per>=90)
        return 'A';
    else if (per>=75)
        return 'B';
    else if (per>=60)
        return 'C';
    else if (per>=45)
        return 'D';
    else
        return 'F';
}

int main(){
    int sub1,sub2,sub3;
    cout<<"Enter marks of subject 1:";
    cin>>sub1;
    cout<<"Enter marks of subjects 2:";
    cin>>sub2;
    cout<<"Enter marks of subject 3:";
    cin>>sub3;

    float per = percentage(sub1,sub2,sub3);
    char gr = grade(per);

    cout<<"\nPercentage:"<<per<<"%"<<endl;
    cout<<"Grade:"<<gr<<endl;

    return 0;
}
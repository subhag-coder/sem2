#include <iostream>
using namespace std;
class Students{
    public:
    int roll;
    string name;

    void display(){
        cout<<"Roll:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;
    }
};

int main(){
    Students s,s1,s2,s3;
    s.roll=1;
    s.name="Subhag";
    s1.roll=2;
    s1.name="Ram";
    s.display();
    s1.display();

    return 0;
}
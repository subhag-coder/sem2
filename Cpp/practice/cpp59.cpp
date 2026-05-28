#include <iostream>
using namespace std;
class Bankaccount{
    string name;
    int accno;
    float balance;
    public:
    Bankaccount(){
        name="";
        accno=0;
        balance=0.0;
    }
    Bankaccount(string acc_hol_name, int acc_no, float bal){
        name=acc_hol_name;
        accno=acc_no;
        balance=bal;
    }
    void input(){
        cout<<"Enter Account Holder Name:";
        cin>>name;
        cout<<"Enter Account Number:";
        cin>>accno;
        cout<<"Enter Balance:";
        cin>>balance;
    }
    void withdraw(double x){
        try{
            if(balance<500){
                throw 1;
            }
            else{
                balance=balance-x;
            }
        }
        catch(int e){
            cout<<"\nUnable debit, minimum balance should be 500";
        }
    }
    void deposit(double x){
        balance=balance+x;
    }
    void display(){
        cout<<"\nAccount Holder Name:"<<name<<endl;
        cout<<"Account Number:"<<accno<<endl;
        cout<<"Available Balance:"<<balance<<endl;
    }
};
int main(){
    Bankaccount a;
    a.input();
    a.withdraw(500);
    a.display();
    return 0;
}
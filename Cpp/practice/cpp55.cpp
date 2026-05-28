#include <iostream>
#include <iostream>
using namespace std;
class BankAccount{
    private:
    int account_number;
    string acc_hol_name;
    float balance;
    public:
    BankAccount(){
        account_number=0;
        acc_hol_name="";
        balance=0;
    }
    BankAccount(int n, string name, float b){
        account_number=n;
        acc_hol_name=name;
        balance=b;
    }
    void diposit(){
        float a;
        cout<<"Enter amount to deposit:";
        cin>>a;
        balance=balance+a;
    }
    void withdraw(){
        float w;
        cout<<"\nEnter amount to withdraw:";
        cin>>w;
        balance=balance-w;
    }
    void display(){
        cout<<"\nAccount Number:"<<account_number<<endl;
        cout<<"Account Holder's Name:"<<acc_hol_name<<endl;
        cout<<"Available balance:"<<balance<<endl;
    }
    
};
int main(){
    BankAccount b(3445563,"Mukul",30000.0);
    b.diposit();
    b.display();
    b.withdraw();
    b.display();
    return 0;
    
}

#include <iostream>
using namespace std;
class Item{
    int number;
    float cost;
    public:
    void getdata(int a, float b);
    void putdata(void);
};
void Item::getdata(int a, float b){
    number=a;
    cost=b;
}
void Item::putdata(void){
    cout<<"Number:"<<number<<endl;
    cout<<"cost:"<<cost;
}

int main(){
    Item k;
    k.getdata(4,5.005);
    k.putdata();
    return 0;
}
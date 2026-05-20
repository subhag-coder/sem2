#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Product{
    protected:
    int id;
    string name;
    double price;
    public:
    Product(int i, string n, double p)
       :id(i), name(n), price(p){}
    
    virtual void display(){
        cout<<"ID:"<<id<<"Name:"<<name<<"Price:"<<price<<endl;
       }

    virtual double getPrice(){
        return price;
    }
    int getId(){
        return id;
    }
    virtual ~Product(){}
};

class DiscountedProduct: public Product{
    double discount;
    public:
    DiscountedProduct(int i, string n, double p, double d)
        :Product(i, n, p), discount(d){}
    double getPrice() override{
        return price -(price*discount/100);
    }
    void display() override{
        cout<<"ID:"<<id<<"\nName:"<<"\nDiscounted Price:"<<getPrice()<<"("<<discount<<"%off)"<<endl;
    }
};

class Cart{
    vector<Product*>items;
    public:
    void addToCart(Product*p){
        items.push_back(p);
    }
    void removeFromCart(int id){
        for (auto it=items.begin(); it!=items.end(); it++){
            if ((*it)->getId()==id){
                items.erase(it);
                cout<<"Item removed!\n";
                return;
            }
        }
        throw "Product not found in cart!";
    }

    void showcart(){
        double total=0;
        for (auto p: items){
            p->display();
            total+=p->getPrice();
        }
        cout<<"Total="<<total<<endl;
    }
};

int main(){
    vector <Product*> store;
    store.push_back(new Product(1, "Laptop", 50000));
    store.push_back(new DiscountedProduct(2,"Phone", 30000, 10));
    store.push_back(new Product(3, "Headphone", 2000));
    Cart cart;
    int choice, id;

    do{
        cout<<"\n1. Show Products";
        cout<<"\n2. Add to Cart";
        cout<<"\n3. Remove from cart";
        cout<<"\n4. Show Cart";
        cout<<"\n5. Exit";
        cout<<"\nEnter choice:";
        cin>>choice;
        try{
            if (choice==1){
                for(auto p:store){
                    p->display();
                }
            }
            else if (choice==2){
                cout<<"Enter product ID:";
                cin>>id;
                bool found=false;
                for (auto p:store){
                    if (p->getId()==id){
                        cart.addToCart(p);
                        cout<<"Added to cart\n";
                        found=true;
                    }
                }
                if (!found){
                    throw "Product not found!";
                }
            }
            else if (choice==3){
                cout<<"Enter product ID toremove:";
                cin>>id;
                cart.removeFromCart(id);
            }
            else if (choice==4){
                cart.showcart();
            }
        }
        catch (const char*msg){
            cout<<"Error:"<<msg<<endl;
        }
    } while (choice!=5);
    for(auto p: store){
        delete p;
    }
}
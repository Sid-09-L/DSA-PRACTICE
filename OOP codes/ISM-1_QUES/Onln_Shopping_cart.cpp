#include<iostream>
using namespace std;

class product{
    int proid;
    string product_name;
    int price;
    int quantity;
    static int count;

    public:
        product(int id,string n,int p,int q){
            proid=id;
            product_name=n;
            price=p;
            quantity=q;
            count++;
        }
        float totalcost(){
            int cost=price*quantity;
            return cost;
        }
        inline float GST(float gst){
            float gst_amount=(totalcost()*gst)/100;
            return gst_amount;
        }
        friend void display(product p);

        ~product(){
            cout<<"product object has been destroyed"<<endl;
        }

};
int product::count=0;

void display(product p){
    cout<<"Product Id:"<<p.proid<<endl;
    cout<<"Product name:"<<p.product_name<<endl;
    cout<<"Price:"<<p.price<<endl;
    cout<<"Quanitity:"<<p.quantity<<endl;
}
int main(){
    product products[3]={
        product(100,"Book",60,5),
        product(102,"Register",200,5),
        product(103,"Pen",100,9),
    };
    for(int i=0;i<3;i++){
        display(products[i]);
        cout<<"GST amount:"<<products[i].GST(18)<<endl;
        cout<<"Total Cost:"<<products[i].totalcost()<<endl;

        cout<<"\n"<<endl;
    }
    int highest=products[0].totalcost();
    int index=0;

    for(int i=0;i<3;i++){
        if(products[i].totalcost()>highest){
            highest=products[i].totalcost();
            index=i;
        }
    }
    cout<<"Highest total Cost="<<highest<<endl;
    display(products[index]);
    return 0;
}
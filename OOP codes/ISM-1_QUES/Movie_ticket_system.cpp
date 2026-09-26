#include<iostream>
using namespace std;

class movieticket{
    string movie_name;
    string cust_name;
    int t_num;
    int t_price;
    int t_quantity;
    static int totaltickets;
    
    public:
        movieticket(string mn,string cn,int num,int p,int q){
            movie_name=mn;
            cust_name=cn;
            t_num=num;
            t_price=p;
            t_quantity=q;
            totaltickets=totaltickets+q;

            
        }
        inline float total(){
            return t_price*t_quantity;
        }
        static int showcount(){
            cout<<"Total number of tickets booked="<<totaltickets<<endl;
        }
        friend void display(movieticket m);

        ~movieticket(){
            cout<<"Booking object destroyed"<<endl;
        }
};

int movieticket::totaltickets=0;

void display(movieticket m){
    cout<<"Movie name:"<<m.movie_name<<endl;
    cout<<"Customer name:"<<m.cust_name<<endl;
    cout<<"Ticket Number:"<<m.t_num<<endl;
    cout<<"Ticket price:"<<m.t_price<<endl;
    cout<<"Ticket quantity:"<<m.t_quantity<<endl;
}
int main(){
    movieticket tickets[3]={
        movieticket("Mirza","Kaleen",101,210,4),
        movieticket("John wick","Guddu",102,150,5),
        movieticket("Makdi manav","Munna",103,110,3),
    };

    for(int i=0;i<3;i++){
        display(tickets[i]);
        cout<<endl;
    }
    movieticket::showcount();

    return 0;
}
#include<iostream>
using namespace std;

class vehicle{
    protected:
        string brand;
        float rent;

    public:
        vehicle(string b,float r){
            brand=b;
            rent=r;
        }
};
class GPS{
    protected:
        string gps;

    public:
        GPS(string g){
            gps=g;
        }
};
class car:public vehicle,public GPS{
    protected:
        string model;
        
    public:
        car(string b,string m,string g,float r):vehicle(b,r),GPS(g){
            model=m;

        }
};
class rentalcar:public car{
    protected:
        int days;

    public:
        rentalcar(string b,string m,string g,float r,int d):car(b,m,g,r){
            days=d;
        }

        void display(){
            cout<<"Brand:"<<brand<<endl;
            cout<<"Model:"<<model<<endl;
            cout<<"Model:"<<gps<<endl;
            cout<<"Rent Per Day:"<<rent<<endl;
            cout<<"Days:"<<days<<endl;
            cout<<"Total rent:"<<rent*days<<endl;
        }
};
class sedan:public rentalcar{
    public:
        sedan(string b,string m,string g,float r,int d):rentalcar(b,m,g,r,d){

        }
};
class SUV:public rentalcar{
    public:
        SUV(string b,string m,string g,float r,int d):rentalcar(b,m,g,r,d){

        }
};
int main(){
   sedan s1("Honda", "Available", "City",2000, 3);

   SUV s2("TATA","PUNCH","AVAILABLE",2000,4);

   cout<<"----------------------SEDAN RENTAL DETAILS------------------------"<<endl;
   s1.display();

   cout<<endl;
   cout<<"----------------------SUV RENTAL DETAILS------------------------"<<endl;
   s2.display();

   cout<<endl;

   return 0;
}
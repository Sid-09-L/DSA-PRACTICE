#include<iostream>
using namespace std;

class Book{
    public:
    int bookid;
    string title;
    string author;
    float price;

    static int count;

    Book(){
        bookid=0;
        title="";
        author="";
        price=0;
        count++;
    }

    Book(int id,string bookname,string auth,float val){
        bookid=id;
        title=bookname;
        author=auth;
        price=val;
        count++;
    }
    
    void finalprice(float discount){
        float discounted_amount=(price*discount)/100;
        float final_price=price-discounted_amount;

        cout<<"Final price:"<<final_price<<endl;
    }
    inline float discount(float discount){
        return (price*discount)/100;
    }
    static void showCount(){
        cout<<"Total books:"<<count<<endl;
    }
    friend void display(Book l);
};
int Book::count=0;

void display(Book b){
    cout<<"Book id:"<<b.bookid<<endl;
    cout<<"Title:"<<b.title<<endl;
    cout<<"Author name:"<<b.author<<endl;
    cout<<"Price:"<<b.price<<endl;
}
int main(){
    Book books[3]={
        Book(101,"C++","Golu",500),
        Book(102,"java","Meow",600),
        Book(103,"DSA","Dinosaur",700),
        
    };
    for(int i=0;i<3;i++){
        display(books[i]);
        float givendiscount=10;
        cout<<"Discounted Amount:"<<books[i].discount(givendiscount)<<endl;

        books[i].finalprice(givendiscount);

        cout<<endl;
    }
    Book::showCount();

    return 0;
}
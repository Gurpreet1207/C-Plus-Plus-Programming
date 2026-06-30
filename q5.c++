#include<iostream>
using namespace std;
class Book{
    private:
    int id,price;
    string name,title;

    public:
    void getdata()
    {
    cout<<"Enter Name: ";
    cin >> name;

    cout<<"Book id: ";
    cin >> id;

    cout<<"price: ";
    cin >> price;

    cout<<"Title: ";
    cin>> title;
    }

    void display()
    {
        cout << "\nBOOK Details" << endl;
        cout << "Book id : " << id << endl;
        cout << "Book name : " << name << endl;
        cout << "Book title: " << title << endl;
        cout<< "Book price: "<< price << endl;
        if(price < 500){
            cout << "Book is Affordable!" << endl;
        }
        else{
            cout<< "Book is Expensive!" << endl;
        }


    }

};

int main()
{
    Book b;

    b.getdata();
    b.display();

    return 0;
}
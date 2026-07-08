#include<iostream>
using namespace std;
class Animal{
    protected:
    string name;
    int age;

    public:
    void set_value(string n, int a)
    {
        name = n;
        age = a;

    }
};

class Zebra : public Animal
{
    public:
    void display()
    {
        cout<<"Animal Name : "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Place of origin : Earth "<<endl;
    }
};

class Dolphin : public Animal
{
    public:
    void  display()
    {
        cout<<"Animal Name : "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Place of origin : Water "<<endl;
    }
};
int main()
{
    Zebra z;
    Dolphin d;
    z.set_value("Zebra",8);
    d.set_value("Dolphin",12);
    cout<<"Zebra details"<<endl;
    z.display();
    cout<<"Dolphin details"<<endl;
    d.display();
    return 0;
}
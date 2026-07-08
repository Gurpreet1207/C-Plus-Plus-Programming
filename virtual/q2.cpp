//pure virtual function
//in group
#include<iostream>
using namespace std;
class number{
    protected:
    int x;
    public:
    void value(int num)
    {
        x=num;
    }

    virtual void display()=0;

};
class decimal : public number{
    public:
    void display()
    {
        cout<<"Decimal Number:"<<x<<endl;
    }
};
class octal : public number{
    public:
    void display()
    {
        cout<<"Octal number: "<<x<<endl;
    }
};
class hextype : public number{
    public:
    void display()
    {
        cout<<"Hexa-Decimal Number: "<<endl;
    }
};
int main()
{
    number *ptr;
    octal o1;
    o1.value(100);
    ptr->display();
    hextype h1;
    h1.value(500);
    ptr=&h1;
    ptr->display();
    return 0;
}

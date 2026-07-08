#include<iostream>
using namespace std;
class data{

    public:
    int x;
   virtual void num(){

     int x;
            x=100;
            cout<<"x="<<x<<endl;
    }

};
class data1 : public data{
    public:
    void num()
    {
        int y=200;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    data *ptr; //pointer to base class
    data d1; //object of base class
    ptr=&d1;
    ptr->num();
    data1 d2; //object of derived class
    ptr=&d2;
    ptr->num();
    return 0;
}
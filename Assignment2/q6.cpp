#include<iostream>
using namespace std;
class Mobile{
    private:
    string brand,color;
    int price;
    float width,heigth;

    public:
    Mobile()
    {
        brand="Samsung";
        color = "black";
        price = 25000;
        width = 8;
        heigth = 17;
    }
    void display()
    {
        cout<<"Brand :  "<<brand<<endl;
        cout<<"Color :  "<<color<<endl;
        cout<<"Price :  "<<price<<endl;
        cout<<"Width :  "<<width<<endl;
        cout<<"Heigth :  "<<heigth<<endl;
    }

};
int main()
{
    Mobile m;
    m.display();
    return 0;

}
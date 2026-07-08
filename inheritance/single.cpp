#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand;
    int fuel_capacity;

};
class car : public vehicle{
    public:
    string car_type;
    void setdata()
    {
        brand="BMW";
        fuel_capacity=500;
        car_type="Electric";

    }
    void display()
    {
        cout<<"car details:"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Fuel Capacity:"<<fuel_capacity<<endl;
        cout<<"Car type:"<<car_type<<endl;
    }

};
int main()
{
    car obj;
    obj.setdata();
    obj.display();
    return 0;
}
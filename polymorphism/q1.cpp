//function overloading
#include<iostream>
using namespace std;
class data{
    public:
    void area(int radius)
    {
        float pi=3.14;
        cout<<"Area of Circle:"<<pi*radius*radius<<endl;

    }
    void area(float side)
    {
        cout<<"Area of Square:"<<side*side<<endl;

    }
    void area(int length, int breadth)
    {
        cout<<"Area of Reactangle:"<<length*breadth<<endl;
    }

};
int main()
{
    data obj;
    obj.area(10);
    obj.area(4.5f);
    obj.area(20,30);
    return 0;
    
    }
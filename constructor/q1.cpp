// special member function used to initializes data members
//it is called automatically when we create objects
//default 
#include<iostream>
using namespace std;
class data{
    private:
    int a;
    float b;
    public:
    data()
    {
        a=10;
        b=50.5;
        cout<<"Constructor Called."<<endl;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }

};
int main()
{
    data obj;
    obj.show();

    return 0;
}
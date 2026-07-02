//perimeterized constructor
#include<iostream>
using namespace std;
class data{
    private:
    int a;
    float b;
    public:
    data(int x, float y)
    {
        a=x;
        b=y;
        cout<<"Constructor called!!"<<endl;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;

    }
};
int main()
{
    data obj(100,150.45);
    obj.show();
    return 0;
}
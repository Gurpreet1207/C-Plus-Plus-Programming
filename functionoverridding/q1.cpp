#include<iostream>
using namespace std;
class animal{
    public:
    void sound()
    {
        cout<<"HU HU..."<<endl;
    }
};
class dog : public animal{
    public:
    void sound()
    {
        cout<<"Barks..."<<endl;
    }
};
int main()
{
    dog d1;
    d1.sound();
    animal a;
    a.sound();
}
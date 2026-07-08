#include<iostream>
using namespace std;
class data{
    private:
    int a,b;
    public:
    data(int x, int y)
    {
        a=x;
        b=y;
    }
    friend class add;
};
class add{
    public:
    void display(data obj)
    {
        int sum =0;
        sum = obj.a + obj.b;
        cout<<"Addition: "<<sum<<endl;
    }
};
int main()
{
    data d1(50,60);
    add d2;
    d2.display(d1);
    return 0;
    
}
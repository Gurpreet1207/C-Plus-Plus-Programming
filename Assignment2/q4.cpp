#include<iostream>
using namespace std;
class Box{

    private:
    double length,breadth,height,area;

    public:
    Box(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
        area = 2 * (l*b+b*h+h*l);
}
void display()
{
    cout<<"Surface area of Box= "<< area;
}
};

int main(){

    Box obj(5,4,3);
    obj.display();
    return 0;
}



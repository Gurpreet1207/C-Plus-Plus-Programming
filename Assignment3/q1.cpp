#include<iostream>
using namespace std;
class Shape{
    protected:
    int width,heigth;
    public:
    Shape(int w, int h)
    {
        width = w;
        heigth = h;
    }
};
 class Triangle : public Shape{
    public:
    Triangle(int w,int h) : Shape(w,h){}
    void area()
    {
        cout<<"Area of Triangle = "<<( width * heigth ) / 2<<endl;

    }

 };
 class Rectangle : public Shape{
    public:
    Rectangle(int w,int h) : Shape(w,h){}
    void area()
    {
        cout<<"Area of Rectangle = "<< width * heigth <<endl;
    }
 };
  
int main()
{
    Triangle t(10,5);
    Rectangle r(10,5);

    t.area();
    r.area();
    return 0;
}
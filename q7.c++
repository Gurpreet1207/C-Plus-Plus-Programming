#include <iostream>
using namespace std;

class Circle
{
private:
    float radius, area, circumference;
    const float PI = 3.14159;

public:
    void setData()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }

    void calculate()
    {
        area = PI * radius * radius;
        circumference = 2 * PI * radius;
    }

    void display()
    {
        cout << "\nCircle Details" << endl;
        cout << "Radius:  " << radius << endl;
        cout << "Area:  " << area << endl;
        cout << "Circumference:  " << circumference << endl;
    }
};

int main()
{
    Circle c;

    c.setData();
    c.calculate();
    c.display();

    return 0;
}
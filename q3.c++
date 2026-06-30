#include<iostream>
using namespace std;
class rectangle{
    private:
    int length,breadth;
    float area,perimeter;

    public:
    void setdata()
    {
        cout << "Enter Rectangle length: ";
        cin >> length;

        cin.ignore();

        cout << "Enter Rectangle Breadth: ";
        cin>> breadth;

    }

    void calculate()
    {
        area = length * breadth; 
        perimeter = 2 * (length + breadth);    
    }
     void getdata()
    {
        cout<<"\nRectangle:"<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"AREA: "<<area<<endl;
        cout<<"PERIMETER: "<<perimeter<<endl; 
    
    }

};

int main()
{
    rectangle r1;
    r1.setdata();
    r1.calculate();
    r1.getdata();
    return 0;
}

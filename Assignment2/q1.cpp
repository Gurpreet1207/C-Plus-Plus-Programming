#include<iostream>
using namespace std;
class area{
    public:
    int Area;
    area(int length, int breadth)
    {
        Area = length*breadth;
        cout<<"Area ="<<Area<<endl;
    }
};
int main()
{
    area r(20,30);
    return 0;
}
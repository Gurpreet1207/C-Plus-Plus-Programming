#include<iostream>
using namespace std;
class Cube{
    private:
    int side;
    public:
    Cube(int s) {
        side = s;

    }
    void Volume()
    {
        cout<<"Volume of Cube = "<<side * side * side <<endl;
    }

};
int main()
{
   Cube c(4);
   c.Volume();
   return 0;

}
//dynamic constructor
//a dynamic constructor is a constructor that dynamically allocates the memory for the object data membersusing pointers.
#include<iostream>
using namespace std;
class data{
    int *ptr=NULL;
    public:
    data(int x)
    {
        ptr = new int;
        *ptr = x;
    }
    void show()
    {
        cout<<"Value: "<<*ptr<<endl;
        delete ptr;
        ptr=NULL;
    }
};
int main()
{
    data obj(50);
    obj.show();
    return 0;
}

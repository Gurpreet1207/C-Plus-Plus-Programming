#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    public:
    student(int x)
    {
        roll=x;
    }
    friend void display(student obj); //friend function declaration
};
void display(student obj)
{
    cout<<"Roll NO:"<<obj.roll<<endl;

}
int main()
{
    student s1(1005);
    display(s1);
    return 0;

}
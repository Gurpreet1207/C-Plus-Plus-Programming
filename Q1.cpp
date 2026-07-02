#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:
    void setdata()
    {
        cout<<"Enter Name:";
        getline(cin,name);
        cout<<"Enter Roll No:";
        cin>>roll;
    }
    void getdata()
    {
        cout<<"\nStudents Details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No:"<<roll<<endl;

    }
};
int main()
{
    student s;
    student *ptr;
    ptr = &s;
   // ptr->setdata();
   (*ptr).setdata();
    ptr->getdata();
    return 0;
}
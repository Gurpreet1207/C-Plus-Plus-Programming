#include<iostream>
using namespace std;
class student{
    private:
    string name,department;
    int roll;
    float cgpa;
    public:
    void setdata()
    {
        cout<<"Enter name:";

        getline(cin,name);
        cout<<"Enter Department:";
        getline(cin,department);
        cout<<"Enter Roll No:";
        cin>>roll;
        cout<<"Enter cgpa:";
        cin>>cgpa;
        cin.ignore();

    }
    void getdata()
    {
        cout<<"\nStudent details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"CGPA: "<<cgpa<<endl; 
    }
};
int main()
{
    student s1,s2;
    s1.setdata();
    s1.getdata();
    s2.setdata();
    s2.getdata();
    return 0;
}

#include<iostream>
using namespace std;
 class Employee
 {
    private:
    int empCode;
    string empName;
    float basicSalary;

    public:
    Employee()
    {
        empCode = 0;
        empName = "";
        basicSalary = 0;
    }
    void input()
    {
        cout<<"Enter Employee Code:";
        cin>>empCode;

        cout<<"Enter Employee Name:";
        cin>>empName;

        cout<<"Enter Basic Salary:";
        cin>>basicSalary;

    }
    void display()
    {
        cout<<"Employee Code: "<<empCode<<endl;
        cout<<"EmployeeName: "<<empName<<endl;
        cout<<"Badsicsalary: "<<basicSalary<<endl;

    }
 };
 int main()
 {
    Employee e;
    e.input();
    e.display();
    return 0;
 }
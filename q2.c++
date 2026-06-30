#include<iostream>
using namespace std;
class employee{
  private:
  string name;
  int id;
  float basicSalary, hra, da, grossSalary;

  public:
    void setdata()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin,name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

     void calculate()
    {
        hra = basicSalary * 0.20; 
        da = basicSalary * 0.10;    
        grossSalary = basicSalary + hra + da;
    }


     void getdata()
    {
        cout<<"\nEmployee details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Basic Salary: "<<basicSalary<<endl;
        cout<<"HRA: "<<hra<<endl; 
        cout<<"DA: "<<da<<endl;
        cout<<"GROSS SALARY: "<<grossSalary<<endl;
    }


};

int main()
{
    employee s1;
    s1.setdata();
    s1.calculate();
    s1.getdata();
    return 0;
}
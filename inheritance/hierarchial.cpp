#include<iostream>
using namespace std;
class org{
	public:
		string name,college;
		long long int contact;
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"College Name:"<<college<<endl;
		cout<<"Contact No:"<<contact<<endl;
	}
};
class faculty: public org{
	public:
		int salary,emp_id;
		void setdata1()
		{
			name="Gopi.";
			college="RBPU.";
			contact=9598223789;
			emp_id=1005;
			salary=120000;
		}
		void show()
		{
			cout<<"Faculty Details:"<<endl;
			cout<<"Employee ID:"<<emp_id<<endl;
			display();
			cout<<"Salary: "<<salary<<endl;
		}
};
class student: public org{
	public:
		int roll;
		float cgpa;
		void setdata2()
		{
			name="Preet.";
			college="RBPU.";
			contact=9856784523;
			roll=2305507;
			cgpa=9.5;
		}
		void show1()
		{
			cout<<"Student Details:"<<endl;
			cout<<"Roll No:"<<roll<<endl;
			display();
			cout<<"CGPA: "<<cgpa<<endl;
		}
};
int main()
{
	faculty emp1;
	emp1.setdata1();
	emp1.show();
	cout<<endl;
	student s1;
	s1.setdata2();
	s1.show1();
	return 0;
}
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
class faculty: virtual public org{
	
};
class student: virtual public org{

};
class account: public faculty, public student{
	public:
		void getdata()
		{
	    	name="Preet";
			college="RBPU";
			contact=9598223789;
		}
		void show()
		{
			cout<<"details:"<<endl;
			display();
		}
};
int main()
{
   account s1;
   s1.getdata();
   s1.show();	
	return 0;
}
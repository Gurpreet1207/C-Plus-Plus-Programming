#include<iostream>
using namespace std;
class payment{
	public:
	virtual void pay()
		{
			cout<<"General Payment."<<endl;
		}
};
class googlepay: public payment{
	public:
		void pay()
		{
			cout<<"Payment through googlepay."<<endl;
		}
};
class debit: public payment{
	public:
		void pay()
		{
			cout<<"Payment through debit card."<<endl;
		}
};
int main()
{
	payment *ptr; // pointer to base class.
	int choice;
 	cout<<"1. Googlepay"<<endl;
 	cout<<"2. Debit card"<<endl;
 	cout<<"Enter your choice.";
 	cin>>choice;
 	if(choice==1)
 	{
 		ptr= new googlepay();
	 }
	 else if(choice==2)
	 {
	 	ptr= new debit();
	 }
	 else
	 {
	 	cout<<"Invalid choice!!"<<endl;
	 	exit(0);
	 }
	 
	ptr->pay();
	delete ptr;
	ptr=NULL;
	return 0;
}
//operator
#include<iostream>
using namespace std;
class complex{
	private:
		int real, imag;
		
	public:
		complex(int x , int y)
		{
			real=x;
			imag=y;
		}
		complex operator+(complex obj)
		{
			complex temp (0,0);
			temp.real=real+obj.real;
			temp.imag=real+obj.imag;
			return temp;
		}
		void display()
		{
			cout<<real<<" + "<<imag <<"i"<<endl;
		}
};

int main()
{
	complex c1(4,6);
	complex c2(2,3);
	cout<<"First complex Number:"<<endl;
	c1.display();
	cout<<"Second complex Number:"<<endl;
	c2.display();
	complex c3 = c1.operator+(c2);
	cout<<"Addition of complex Number:"<<endl;
	c3.display();
	return 0;
}
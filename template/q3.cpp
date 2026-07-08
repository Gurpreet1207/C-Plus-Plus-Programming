#include<iostream>
using namespace std;
template<typename T>
class Calculator
{
    T a;
    T b;
    public:
    Calculator(){}
    Calculator(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int add() {
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int multiply(){
        return a*b;
    }
    int division(){
       if(b != 0){
        return a/b;
       }
       else{
        cout<<"Division is not possible: "<<endl;
        return 1;
       }
    }
};
int main()
{
    int a=10, b=20;
    Calculator<int> c1(a,b);
    cout<< "Add : "<<c1.add() <<endl;
    cout<< "Multiply : " << c1.multiply() <<endl;
    Calculator<double> c2(5.5,6.0);
    cout<< "Add : "<<c2.add() << endl;
    cout<< "Multiply : " << c2.multiply() << endl;
    return 0;

}
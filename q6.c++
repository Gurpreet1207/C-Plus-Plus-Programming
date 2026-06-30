#include<iostream>
using namespace std;
class Calculator {
    private:
    float num1, num2;

    public:
    void setData()
    {
        cout << "Enter First Number: ";
        cin >> num1;

        cout << "Enter Second Number: ";
        cin >> num2;
    }
     void addition()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtraction()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiplication()
    {
        cout << "Multiplication = " << num1 * num2 << endl;
    }
  
    void division()
    {
        if(num2 > 0){


            cout << "Division = " <<(num1 / num2)<<endl;
        }else{
        cout << " Division is not possible: "<<endl;
    }

}
};
int main(){
 Calculator c;
 c.setData();
 c. addition();
 c.subtraction();
 c.multiplication();
 c.division();
 return 0;
}
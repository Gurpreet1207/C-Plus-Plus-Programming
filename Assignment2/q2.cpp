#include<iostream>
using namespace std;
class Calculation
{
    private:
    int num1, num2;

    public:
    int calculation(int a, int b ){
        num1 = a;
        num2 = b;

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
 
 Calculation obj(43, 18);
 obj. addition();
 obj.subtraction();
 obj.multiplication();
 obj.division();
 return 0;
}
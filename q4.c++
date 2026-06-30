#include<iostream>
using namespace std;
class BankAccount{
    private:
    string name;
    int number;
    float balance;


    public:
    void getdata()
    {
    cout<<"Enter Name: ";
    cin >> name;

    cout<<"Account Number: ";
    cin >> number;

    cout<<"Account Balance: ";
    cin >> balance;
    }
       void deposit()
    {
        float amount;
        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        balance = balance + amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

      void withdraw()
    {
        float amount;
        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
    void display()
    {
        cout << "\nAccount Details" << endl;
        cout << "Account Number : " << number << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Current Balance: " << balance << endl;

    }

};

int main()
{
    BankAccount b;

    b.getdata();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
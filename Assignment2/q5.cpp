#include <iostream>
using namespace std;

class ATM
{
private:
    int accountNo;
    float balance;

public:
    ATM(int a, float b)
    {
        accountNo = a;
        balance = b;
    }

    void deposit()
    {
        float amt;
        cout << "Enter Deposit Amount: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw()
    {
        float amt;
        cout << "Enter Withdraw Amount: ";
        cin >> amt;

        if (amt > balance)
            cout << "Insufficient Balance!" << endl;
        else
            balance -= amt;
    }

    void balanceEnquiry()
    {
        cout << "Account No : " << accountNo << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    int acc, ch;
    float bal;

    cout << "Enter Account Number: ";
    cin >> acc;

    cout << "Enter Initial Balance: ";
    cin >> bal;

    ATM obj(acc, bal);

    while (true)
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Balance";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                obj.deposit();
                break;

            case 2:
                obj.withdraw();
                break;

            case 3:
                obj.balanceEnquiry();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid Choice!";
        }
    }
}
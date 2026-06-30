#include <iostream>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float price, totalCost;

public:
    void setData()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin>> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void calculate()
    {
        totalCost = quantity * price;
    }

    void display()
    {
        cout << "\n Product Details" << endl;
        cout << "Product ID : " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per Unit: " << price << endl;
        cout << "Total Cost: "<< totalCost << endl;
    }
};

int main()
{
    Product p;

    p.setData();
    p.calculate();
    p.display();

    return 0;
}
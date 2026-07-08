#include <iostream>
using namespace std;

// Function Template
template <class T>
void swapNumbers(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Integer
    int i1 = 10, i2 = 20;
    cout << "Before Swapping Integers: " << i1 << " " << i2 << endl;
    swapNumbers(i1, i2);
    cout << "After Swapping Integers: " << i1 << " " << i2 << endl;

    // Float
    float f1 = 10.5f, f2 = 20.5f;
    cout << "\nBefore Swapping Floats: " << f1 << " " << f2 << endl;
    swapNumbers(f1, f2);
    cout << "After Swapping Floats: " << f1 << " " << f2 << endl;

    // Double
    double d1 = 100.25, d2 = 200.75;
    cout << "\nBefore Swapping Doubles: " << d1 << " " << d2 << endl;
    swapNumbers(d1, d2);
    cout << "After Swapping Doubles: " << d1 << " " << d2 << endl;

    return 0;
}
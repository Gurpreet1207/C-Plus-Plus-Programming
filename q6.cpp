//Constructor Overloading
// More than one Constructer having same name but diff parameters
#include<iostream>
using namespace std;

class Student {
public:
    // Constructor 1 (no args)
    Student() {
        cout << "Default constructor called\n";
    }
    // Constructor 2 (1 arg)
    Student(string name) {
        cout << "Name: " << name << endl;
    }
    // Constructor 3 (2 args)
    Student(string name, int rollno) {
        cout << "Name: " << name << ", Rollno: " << rollno << endl;
    }
};

int main() {
    Student s1; // Default
    Student s2("Gurpreetkaur"); // 1 arg
    Student s3("Gurpreetkaur", 2305507); // 2 args
    return 0;
}
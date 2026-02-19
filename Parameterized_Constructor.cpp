//Constructer Types:

// 2).Parameterized Constructer = A constructor that takes parameters is called a parameterized constructor.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    Student(int r) {   // Parameterized Constructor
        roll = r;
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1(101);
    return 0;
}

//Constructer Types:

// 3).Copy Constructer => A constructor that initializes an object using another object of the same class is called a copy constructor.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    Student(int r) {
        roll = r;
    }

    Student(const Student &obj) {   // Copy Constructor
        roll = obj.roll;
        cout << "Copied Roll No: " << roll << endl;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;   // Copy constructor called
    return 0;
}

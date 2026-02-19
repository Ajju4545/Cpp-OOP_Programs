//Constructer Types:

// 1).Default Constructer = A constructor that does not take any parameters is called a default constructor.

#include <iostream>
using namespace std;

class Student {
public:
    Student() {   // Default Constructor
        cout << "Default Constructor called" << endl;
    }
};

int main() {
    Student s1;
    return 0;
}

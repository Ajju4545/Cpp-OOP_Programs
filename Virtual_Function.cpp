//// Polymorphism
// Run time polymorphism types:-

// Virtual Function => A virtual function is a function in the base class that allows the derived class to provide its own version of that function, and the function call is decided at run time.

// The combination of Virtual Function + Overriding = Run Time Polymorphism

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // Virtual function
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {   // Overriding
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptr;   // Base class pointer
    Dog d;

    ptr = &d;
    ptr->sound();  // Run-time polymorphism

    return 0;
}

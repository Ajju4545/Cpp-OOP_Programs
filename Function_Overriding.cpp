// Function Overriding => Function overriding is when a derived class provides its own implementation of a function that is already defined in the base class.

// Simple Overriding:

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {   // Overriding
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptr;
    Dog d;

    ptr = &d;
    ptr->sound();  
}

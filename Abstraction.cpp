// Abstraction => It showing essential data and hiding unessential data
#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;
};

// Derived class
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();

    return 0;
}

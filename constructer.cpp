//Constructer => A constructor is a special member function of a class that is automatically called when an object is created.

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {   // This is Constructor
        cout << "Constructor is called" << endl;
    }
};

int main() {
    Demo obj;   // We create object
    return 0;
}




//Destructer => A destructor is a special member function of a class that is automatically called when an object is destroyed.

#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() {   // This is Destructor
        cout << "Destructor is called" << endl;
    }
};

int main() {
    Demo obj;   // We create object
    return 0;    // Program end -> object destroy
}

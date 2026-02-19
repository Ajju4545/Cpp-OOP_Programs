// Polymorphism
// Compile time polymorphism types:-

// 1) Function Overloading => Same function, different parameters

#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(double b) {
        cout << "Double: " << b << endl;
    }
};

int main() {
    Print obj;
    obj.show(10);
    obj.show(5.5);
    return 0;
}

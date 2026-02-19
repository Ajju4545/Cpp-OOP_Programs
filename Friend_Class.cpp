//Friend Class => A friend class is a class that is allowed to access the private and protected members of another class.

#include <iostream>
using namespace std;

class A {
private:
    int num;

public:
    A(int n) {
        num = n;
    }

    friend class B;   // Friend class declaration
};

class B {
public:
    void show(A obj) {
        cout << "Number: " << obj.num << endl;  // Accessing private data
    }
};

int main() {
    A a1(20);
    B b1;
    b1.show(a1);
    return 0;
}

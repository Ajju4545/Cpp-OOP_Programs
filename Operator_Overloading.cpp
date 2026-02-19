// Polymorphism
// Compile time polymorphism types:-

// 2) Operator Overloading => It redefine the operator

#include <iostream>
using namespace std;

class Demo {
public:
    int num;

    Demo(int n) {
        num = n;
    }

    Demo operator + (Demo obj) {
        Demo temp(0);
        temp.num = num + obj.num;
        return temp;
    }
};

int main() {
    Demo obj1(5), obj2(10);
    Demo result = obj1 + obj2;

    cout << "Sum: " << result.num;
    return 0;
}

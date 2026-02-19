//Friend Function => A friend function is a function that is not a member of a class but is allowed to access its private and protected data.
//It is also imp Concept

#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    Demo(int n) {
        num = n;
    }

    friend void show(Demo obj);   // Friend function declaration
};

void show(Demo obj) {
    cout << "Number: " << obj.num << endl;   // Accessing private data
}

int main() {
    Demo d1(10);
    show(d1);
    return 0;
}

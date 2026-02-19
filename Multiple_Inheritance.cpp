//Multiple Inheritance => Multiple inheritance is when a class inherits from two or more base classes.

#include <iostream>
using namespace std;

class Mother {
public:
    void showMother() {
        cout << "Mother class" << endl;
    }
};

class Father {
public:
    void showFather() {
        cout << "Father class" << endl;
    }
};

class Child : public Mother, public Father {
public:
    void showChild() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.showMother();
    obj.showFather();
    obj.showChild();
    return 0;
}

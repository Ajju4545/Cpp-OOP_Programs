//Multilevel Inheritance => Multilevel inheritance is when a class is derived from another derived class.

#include <iostream>
using namespace std;

class Grandfather {
public:
    void showGrandfather() {
        cout << "Grandfather class" << endl;
    }
};

class Father : public Grandfather {
public:
    void showFather() {
        cout << "Father class" << endl;
    }
};

class Son : public Father {
public:
    void showSon() {
        cout << "Son class" << endl;
    }
};

int main() {
    Son obj;
    obj.showGrandfather();
    obj.showFather();
    obj.showSon();
    return 0;
}

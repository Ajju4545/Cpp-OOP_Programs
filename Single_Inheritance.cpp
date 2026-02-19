//Single Inheritance => Single inheritance is when a class inherits from only one base class.

#include <iostream>
using namespace std;

class Father {
public:
    void showFather() {
        cout << "This is Father class" << endl;
    }
};

class Son : public Father {
public:
    void showSon() {
        cout << "This is Son class" << endl;
    }
};

int main() {
    Son obj;
    obj.showFather();
    obj.showSon();
    return 0;
}

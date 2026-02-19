//Class => A class is a blueprint
//Object => An object is a real instance of a class.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Ajay";
    s1.age = 20;

    s1.display();
    return 0;
}

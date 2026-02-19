//Encapsulation => It helps to data hiding

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;     // Data hidden
    float marks;    // Data hidden

public:
    // This is Setter functions
    void setData(int r, float m) {
        rollNo = r;
        marks = m;
    }

    // This is Getter functions
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData(101, 85.5);  // Accessing through public method
    s1.display();

    return 0;
}

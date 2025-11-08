#include <iostream>
using namespace std;

// Function Template
template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;   // returns the larger value
}

int main() {
    cout << "Maximum of 10 and 20 is: " << findMax(10, 20) << endl;
    cout << "Maximum of 5.5 and 3.2 is: " << findMax(5.5, 3.2) << endl;
    return 0;
}    
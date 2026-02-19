//Dynamic Memory Allocation => Dynamic memory allocation is the process of allocating memory at run time using new operator and freeing it using delete operator.

// This is Dynamic Array:

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n];   // Dynamic array

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;   // Free array memory

    return 0;
}

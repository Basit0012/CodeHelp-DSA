// Create a Program initialising NULL, Void and Dangling Pointer
#include <iostream>
using namespace std;

int main() {
    // 1. NULL Pointer
    int *ptr1 = NULL;
    cout << "NULL Pointer: " << ptr1 << endl;

    // 2. Void Pointer
    int x = 10;
    void *ptr2 = &x;
    cout << "Void Pointer Address: " << ptr2 << endl;
    cout << "Value using Void Pointer: " << *(int*)ptr2 << endl;

    // 3. Dangling Pointer
    int *ptr3 = new int(25);
    cout << "Before delete: " << *ptr3 << endl;

    delete ptr3;   // Memory is freed
    // ptr3 is now a dangling pointer

    cout << "Dangling Pointer Address: " << ptr3 << endl;

    // Uncommenting the next line is undefined behavior
    // cout << *ptr3 << endl;

    return 0;
}
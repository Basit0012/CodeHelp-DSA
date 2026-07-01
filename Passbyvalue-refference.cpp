#include <iostream>
using namespace std;

void change(int &n) {   // Pass by reference
    n = 3;
}
void changes(int n) {   // Pass by value
    n = 10;
}
int main() {
    int n = 4000;

    change(n);
    cout << "Output after calling pass by reference function: " << n << endl;

    changes(n);
    cout << "Output after calling pass by value function: " << n << endl;

    return 0;
}
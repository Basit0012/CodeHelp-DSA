#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < count; j++) {
            cout << "*";
        }
        cout << endl;
        if (i % 2 == 0) {
            count +=2;
        }
    }
    return 0;
}
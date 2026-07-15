// Print n to 1 without loop
// Solved
// Difficulty: EasyAccuracy: 77.72%Submissions: 141K+Points: 2Average Time: 10m
// Print numbers from n to 1 (space separated) without the help of loops.

// Examples :

// Input: n = 10
// Output: 10 9 8 7 6 5 4 3 2 1
// Constraints :
// 1 ≤ n ≤ 1000

#include <iostream>
using namespace std;

class Solution {
public:
    void printNos(int n) {
        if (n == 0)
            return;

        cout << n << " ";
        printNos(n - 1);
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.printNos(n);

    return 0;
}
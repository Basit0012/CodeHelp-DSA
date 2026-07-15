// 1 to n Without Loops
// Solved
// Difficulty: BasicAccuracy: 47.21%Submissions: 423K+Points: 1
// Given an positive integer n, print numbers from 1 to n without using loops.

// Implement the function printTillN() to print the numbers from 1 to n as space-separated integers.

// Examples

// Input: n = 5
// Output: 1 2 3 4 5
// Explanation: We have to print numbers from 1 to 5.
// Input: n = 10
// Output: 1 2 3 4 5 6 7 8 9 10
// Explanation: We have to print numbers from 1 to 10.
// Constraints:
// 1 ≤ n ≤ 1000

#include <iostream>
using namespace std;

class Solution {
public:
    void printTillN(int n) {
        if (n == 0)
            return;

        printTillN(n - 1);
        cout << n << " ";
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.printTillN(n);

    return 0;
}
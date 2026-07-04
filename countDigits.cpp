/*
Count Digits in a Number

Difficulty: Easy
Accuracy: 42.13%
Points: 2

Problem Statement:
Given a number n, return the count of digits in this number.

Examples:

Input:
n = 1567

Output:
4

Explanation:
There are 4 digits in 1567, which are 1, 5, 6 and 7.

Input:
n = 99999

Output:
5

Explanation:
Number of digits in 99999 is 5.

Constraints:
1 ≤ n ≤ 10^9

Approach:
1. Initialize a variable 'count' to 0.
2. Repeat until n becomes 0:
   - Divide n by 10.
   - Increment count.
3. Return count.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

class Solution {
public:
    int countDigits(int n) {
        int count = 0;

        while (n > 0) {
            n = n / 10;
            count++;
        }

        return count;
    }
};
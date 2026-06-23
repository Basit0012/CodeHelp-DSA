/*
Question: Check K-th Bit

Problem Statement:
Given two positive integers n and k, check whether the k-th bit
(from the Least Significant Bit (LSB), using 0-based indexing)
is set (1) or not set (0).

A bit is called "set" if its value is 1.

Examples:

Input:
n = 4, k = 0

Binary Representation:
4 = 100

Bit Positions:
2 1 0
1 0 0

Output:
false

Explanation:
The 0th bit (LSB) is 0, so it is not set.


--------------------------------------------------

Input:
n = 4, k = 2

Binary Representation:
4 = 100

Bit Positions:
2 1 0
1 0 0

Output:
true

Explanation:
The 2nd bit is 1, so it is set.


--------------------------------------------------

Input:
n = 500, k = 3

Binary Representation:
500 = 111110100

Bit Positions:
8 7 6 5 4 3 2 1 0
1 1 1 1 1 0 1 0 0

Output:
false

Explanation:
The 3rd bit is 0, so it is not set.


Constraints:
1 ≤ n ≤ 10^9
0 ≤ k ≤ 31

Approach:
1. Create a mask by left-shifting 1 by k positions.
      mask = (1 << k)

2. Perform bitwise AND with n.
      n & mask

3. If the result is non-zero, the k-th bit is set.
   Otherwise, it is not set.

Example:
n = 4, k = 2

mask = (1 << 2) = 4  -> 100
n    = 4             -> 100

100 & 100 = 100 (non-zero)

Therefore, the 2nd bit is set.

Time Complexity: O(1)
Space Complexity: O(1)
*/
class Solution {
  public:
    bool checkKthBit(int n, int k) {
       int x = 1 << k;
       if(( n & x ) !=0) return true;
       else return false;
    }
};
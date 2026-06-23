/*
Question: Odd or Even

Problem Statement:
Given a positive integer n, determine whether it is odd or even.

Return:
- true  -> if the number is even
- false -> if the number is odd

--------------------------------------------------

Example 1:

Input:
n = 15

Output:
false

Explanation:
15 is not divisible by 2.

15 % 2 = 1

Therefore, 15 is an odd number.

--------------------------------------------------

Example 2:

Input:
n = 44

Output:
true

Explanation:
44 is divisible by 2.

44 % 2 = 0

Therefore, 44 is an even number.

--------------------------------------------------

Constraints:

1 ≤ n ≤ 10^4

--------------------------------------------------

Approach 1: Using Modulus Operator

A number is:
- Even if remainder after division by 2 is 0.
- Odd if remainder after division by 2 is 1.

Formula:

n % 2 == 0

If true  -> Even
If false -> Odd

--------------------------------------------------

Approach 2: Using Bit Manipulation

Check the Least Significant Bit (LSB).

Rule:
- Even number -> Last bit is 0
- Odd number  -> Last bit is 1

Formula:

(n & 1)

Results:
0 -> Even
1 -> Odd

Examples:

n = 44

44 = 101100₂

101100
&
000001
-------
000000

Result = 0

Therefore, 44 is Even.

--------------------------------------------------

n = 15

15 = 1111₂

1111
&
0001
-----
0001

Result = 1

Therefore, 15 is Odd.

--------------------------------------------------

Reference Code (Modulus Method):

bool isEven(int n) {
    return (n % 2 == 0);
}

--------------------------------------------------

Reference Code (Bit Manipulation Method):

bool isEven(int n) {
    return ((n & 1) == 0);
}

--------------------------------------------------

Dry Run:

n = 44

44 & 1
= 0

Return true

--------------------------------------------------

n = 15

15 & 1
= 1

Return false

--------------------------------------------------

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
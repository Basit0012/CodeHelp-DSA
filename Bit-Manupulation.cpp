/*
Question: Bit Manipulation

Problem Statement:
Given a 32-bit unsigned integer num and an integer i,
perform the following three operations:

1. Get the i-th bit
2. Set the i-th bit
3. Clear the i-th bit

Important:
- Bit positions are 1-based (NOT 0-based).
- Counting starts from the Least Significant Bit (LSB).
- Print three space-separated values:
    get_bit set_bit clear_bit

--------------------------------------------------

Example 1:

Input:
num = 70, i = 3

Binary Representation:
70 = 1000110

Bit Positions (1-based from LSB):
7 6 5 4 3 2 1
1 0 0 0 1 1 0

Output:
1 70 66

Explanation:

1. Get 3rd Bit:
   3rd bit = 1

2. Set 3rd Bit:
   It is already 1, so value remains 70

3. Clear 3rd Bit:
   1000110
& 1111011
-----------
   1000010 = 66

--------------------------------------------------

Example 2:

Input:
num = 8, i = 1

Binary Representation:
8 = 1000

Bit Positions:
4 3 2 1
1 0 0 0

Output:
0 9 8

Explanation:

1. Get 1st Bit:
   0

2. Set 1st Bit:
   1000 | 0001 = 1001 = 9

3. Clear 1st Bit:
   Already 0, so value remains 8

--------------------------------------------------

Bit Manipulation Formulas:

Let:

mask = (1 << (i - 1))

since positions are 1-based.

--------------------------------------------------

1. Get i-th Bit

Method 1:
(num >> (i - 1)) & 1

Method 2:
(num & mask) ? 1 : 0

Returns:
0 -> bit not set
1 -> bit set

--------------------------------------------------

2. Set i-th Bit

num | mask

OR operation forces the bit to become 1.

--------------------------------------------------

3. Clear i-th Bit

num & (~mask)

NOT creates a mask with 0 at i-th position.
AND operation forces that bit to become 0.

--------------------------------------------------

Dry Run:

num = 70
i = 3

mask = 1 << (3 - 1)
     = 1 << 2
     = 4

Binary:
mask = 0000100

Get:
(70 >> 2) & 1
= 17 & 1
= 1

Set:
70 | 4
= 70

Clear:
70 & (~4)
= 66

Output:
1 70 66

--------------------------------------------------

Reference Code:

void bitManipulation(int num, int i) {
    int get   = (num >> (i - 1)) & 1;
    int set   = num | (1 << (i - 1));
    int clear = num & (~(1 << (i - 1)));

    cout << get << " " << set << " " << clear;
}

--------------------------------------------------

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        // int get = (num >> (i - 1)) & 1;
        int get=(num&(1<<i-1))>>i-1;
        int set=num|(1<<i-1);
        int clear=num&(~(1<<i-1));
        cout<<get<<" "<<set<<" "<<clear;
    }
};
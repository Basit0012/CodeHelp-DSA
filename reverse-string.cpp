/*
Question: Reverse a String

Difficulty: Basic
Accuracy: 69.49%
Points: 1

Problem Statement:
You are given a string s, and your task is to reverse the string.

Examples:
Input: s = "Geeks"
Output: "skeeG"

Input: s = "for"
Output: "rof"

Input: s = "a"
Output: "a"

Constraints:
1 <= s.size() <= 10^6

Approach:
1. Use two pointers:
   - left starts from the beginning (index 0).
   - right starts from the last character (index n-1).
2. Swap the characters at both pointers.
3. Move left forward and right backward.
4. Continue until both pointers meet or cross.
5. Return the reversed string.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <string>
using namespace std;

class Solution {
  public:
    string reverseString(string& s) {

        // Initialize left pointer at the beginning
        int left = 0;

        // Initialize right pointer at the end
        int right = s.size() - 1;

        // Swap characters until both pointers meet
        while (left < right) {

            // Swap the characters
            swap(s[left], s[right]);

            // Move left pointer forward
            left++;

            // Move right pointer backward
            right--;
        }

        // Return the reversed string
        return s;
    }
};
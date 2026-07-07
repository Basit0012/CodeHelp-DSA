/*
=========================================================
                Prefix Sum Range Query
=========================================================

Question:
You are given an integer array arr[] and a list of queries[][].
Each query is represented as [L, R], where L and R are indices.

For every query, find the sum of all elements from index L to R
(both inclusive).

Example 1:
Input:
arr = [2, 4, 6, 8, 10]
queries = {{1,3}, {0,2}}

Output:
18
12

Explanation:
Query [1,3] = 4 + 6 + 8 = 18
Query [0,2] = 2 + 4 + 6 = 12

---------------------------------------------------------
Approach:
---------------------------------------------------------

Brute Force:
For every query, iterate from index L to R and calculate the sum.

Time Complexity = O(Q × N)

This is inefficient when the number of queries is large.

---------------------------------------------------------
Optimized Approach (Prefix Sum)
---------------------------------------------------------

Step 1:
Create a Prefix Sum array.

prefix[i] = sum of elements from index 0 to i.

Example:

arr    = [2, 4, 6, 8, 10]
prefix = [2, 6, 12, 20, 30]

Step 2:
Answer each query using the prefix array.

If L == 0

    Sum = prefix[R]

Otherwise

    Sum = prefix[R] - prefix[L-1]

This makes every query O(1).

---------------------------------------------------------
Time Complexity:
---------------------------------------------------------
Building Prefix Array : O(N)

Answering Q Queries : O(Q)

Overall : O(N + Q)

Space Complexity : O(N)

=========================================================
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Input array
    vector<int> arr = {2, 4, 6, 8, 10};

    // Queries
    vector<vector<int>> queries = {
        {1, 3},
        {0, 2}
    };

    // -----------------------------
    // Step 1 : Build Prefix Sum Array
    // -----------------------------

    vector<int> prefix(arr.size());

    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // -----------------------------
    // Step 2 : Process Queries
    // -----------------------------

    for (auto query : queries) {

        int L = query[0];
        int R = query[1];

        int rangeSum;

        // If range starts from index 0
        if (L == 0)
            rangeSum = prefix[R];

        // Otherwise subtract prefix before L
        else
            rangeSum = prefix[R] - prefix[L - 1];

        cout << "Sum from index " << L << " to " << R
             << " = " << rangeSum << endl;
    }

    return 0;
}
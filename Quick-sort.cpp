// Quick Sort
// Solved
// Difficulty: MediumAccuracy: 55.23%Submissions: 319K+Points: 4Average Time: 15m
// Given an array arr[], with starting index low and ending index high, complete the functions partition() and quickSort() so that the array becomes sorted in ascending order.

// Examples:

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]
// Explanation: After sorting, all elements are arranged in ascending order.
// Input: arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]
// Output: [1, 1, 2, 3, 4, 6, 7, 9, 10]
// Explanation: Duplicate elements (1) are retained in sorted order.
// Input: arr[] = [5, 5, 5, 5]
// Output: [5, 5, 5, 5]
// Explanation: All elements are identical, so the array remains unchanged.
// Constraints:
// 1 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 105

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;

        int partIndex = partition(arr, low, high);

        quickSort(arr, low, partIndex - 1);
        quickSort(arr, partIndex + 1, high);
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {

            while (i <= high - 1 && arr[i] <= pivot)
                i++;

            while (j >= low + 1 && arr[j] > pivot)
                j--;

            if (i < j)
                swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Original Array: ";
    for (int x : arr)
        cout << x << " ";

    cout << endl;

    obj.quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}
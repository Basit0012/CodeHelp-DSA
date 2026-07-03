#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(vector<int> &arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            if (arr[start] != arr[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;

    if (obj.isPalindrome(arr)) {
        cout << "Array is Palindrome";
    } else {
        cout << "Array is Not Palindrome";
    }

    return 0;
}
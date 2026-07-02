#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {
        int max = INT_MIN;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    cout << "Largest element is: " << obj.largest(arr) << endl;

    return 0;
}
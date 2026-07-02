#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {
        int min = INT_MAX;
        int max = INT_MIN;

        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }

            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return {min, max};
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> result = obj.getMinMax(arr);

    cout << "Minimum element = " << result[0] << endl;
    cout << "Maximum element = " << result[1] << endl;

    return 0;
}
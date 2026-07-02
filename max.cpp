#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {
        int maxi = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        return maxi;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    int ans = obj.largest(arr);

    cout << "Largest element = " << ans << endl;

    return 0;
}
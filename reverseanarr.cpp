#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        vector<int> newarr;
        int n = arr.size();

        for (int i = n - 1; i >= 0; i--) {
            newarr.push_back(arr[i]);
        }

        arr = newarr;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.reverseArray(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
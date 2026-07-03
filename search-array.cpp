#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    Solution obj;
    int ans = obj.search(arr, x);

    cout << ans << endl;

    return 0;
}

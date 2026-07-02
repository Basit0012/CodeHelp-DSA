#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int Firstlargest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] > Firstlargest) {
                secondLargest = Firstlargest;
                Firstlargest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] != Firstlargest) {
                secondLargest = arr[i];
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    cout << "Second Largest Element: " << obj.getSecondLargest(arr);

    return 0;
}
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int altitude = 0;

        for (auto it : gain) {
            sum += it;
            altitude = max(altitude, sum);
        }

        return altitude;
    }
};
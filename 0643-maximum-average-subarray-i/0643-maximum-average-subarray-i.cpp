class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double windowSum=0;
        int n = arr.size();
        for(int i=0;i<k;i++){
            windowSum+=arr[i];
        }
        double ans=windowSum;

        for(int i=0;i<n-k;i++){
            windowSum-=arr[i];
            windowSum+=arr[i+k];
            ans=max(ans,windowSum);
        }
        return double(ans/k);
    }
};
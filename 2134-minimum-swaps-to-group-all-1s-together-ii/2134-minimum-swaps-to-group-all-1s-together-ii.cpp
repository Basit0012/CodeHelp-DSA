class Solution {
public:
    int minSwaps(vector<int>& arr) {
        int windowSize=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==1)windowSize++;
        }
        int ans = INT_MAX;
        int zC=0;
        for(int i = 0; i<windowSize;i++){
            if(arr[i]==0)zC++;
        }
        // return zC;
        ans = zC;
        for(int i=0;i<n;i++){
            if(arr[i]==0)zC--;
            if(arr[(i + windowSize)%n]==0)zC++;
            ans = min(ans,zC);
        }
        return ans;
    }
};
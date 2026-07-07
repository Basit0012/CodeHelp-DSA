class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long>pref;
        vector<long>suff;
        
        long sum=0;
        for(int i=0;i<n-1;i++){
            sum +=nums[i];
            pref.push_back(sum);
        }
        sum=0;
        for(int i=n-1;i>0;i--){
            sum+=nums[i];
            // suff[i-1]=sum;
            suff.push_back(sum);
        }
        reverse(suff.begin(),suff.end());
        int ans=0;
        for(int i=0;i<n-1;i++){
        // if current element of prefix is greater than suffix element
        // than increment the ans.
        if(pref[i]>=suff[i])
        ans++;
        }
        return ans;
    }
};
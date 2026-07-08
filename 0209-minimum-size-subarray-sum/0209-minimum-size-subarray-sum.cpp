class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int end=0;
        int n=nums.size();
        int ans=INT_MAX;
        int sum = nums[0];

        while(end<n){
            if(sum<target){
                if(end < n-1){
                     end++;
                sum += nums[end];
                }
                else break;
            } 
            if(sum>=target){
                int currsize = end-start+1;
                ans=min(ans,currsize);
                sum-=nums[start];
                start++;
            }   
        }
        return (ans==INT_MAX)?0:ans;  
    }
};
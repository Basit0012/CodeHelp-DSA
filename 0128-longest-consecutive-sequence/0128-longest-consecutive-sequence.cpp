// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         sort(ums.begin(),nums.end());
//         int ans = 0;
//         int count = 1;
//         for(int i=1;i<n;i++){
//             if(nums[i]==nums[i-1])
//             continue;
//             if(nums[i]==nums[i-1]+1count++);
//         }
//     }
// };
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()){
            return 0;
        }
        int count = 1;
        int ans=1;
        sort(nums.begin(), nums.end()); 
        for(int i = 1; i < n; i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                count = 1;
            }
            ans=max(ans, count);
        }
        return ans;
    }
};
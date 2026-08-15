class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low = 0;
        int res = 1;
        int high = 1;
        int n = nums.size();
        while(high < n){
            if(nums[high] == nums[high-1]){
                high++;
                continue;
            }
            nums[low + 1] = nums[high];
            low++;
            res++;
            high++;
        }
        return res;
    }
};
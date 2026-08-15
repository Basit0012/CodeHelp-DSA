class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2){
            return n;
        }
        int high = 2;
        int low = 2;
        int res = 2;

        while(high < n){
            if(nums[high]==nums[low - 2]){
                high++;
                continue;
            }
            nums[low] = nums[high];
            low++;
            res++;
            high++;
        }
        return res;
    }
};
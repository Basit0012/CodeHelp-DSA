class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[j]<nums[i]){
            
            j = j + 1;
            nums[j] = nums[i];
        }
        }
        return j+1;
    }
};
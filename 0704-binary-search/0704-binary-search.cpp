class Solution {
public:
    int binary(vector<int>&nums,int target,int low, int high){
        if(low>high)return -1;
        int mid=low+(high-low)/2;
        if(nums[mid]>target)return binary(nums,target,low,mid-1);
        else if(nums[mid]<target)return binary(nums,target,mid+1,high);
        return mid;
    }
    int search(vector<int>& nums, int target){
        return binary(nums,target,0,nums.size()-1);
        
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int Rightsum=0;
     for(int i=0;i<nums.size();i++){
        Rightsum+=nums[i];
     }   
     int Leftsum=0;
     for(int i=0;i<nums.size();i++){
        Rightsum-=nums[i];
        if(Rightsum==Leftsum)return i;
        Leftsum += nums[i];
     }
     return -1;
    }
    
};
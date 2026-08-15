class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int nums = numbers.size();
        int i = 0, j = nums-1;
        while(i<j){
            int sum = numbers[i] + numbers[j];
            if(sum == target) return {i+1,j+1};
            else if(sum>target){
                j--;
            }else{
                i++;
            }
        }
        return {};
    }
};
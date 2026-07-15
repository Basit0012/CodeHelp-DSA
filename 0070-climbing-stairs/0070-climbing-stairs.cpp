class Solution {
public:
    int calculate(int n, vector<int>&arr){
        if(n<=1)return 1;
        if(arr[n]!=-1)return arr[n];
        return arr[n]=calculate(n-1,arr)+calculate(n-2,arr);
    }
    int climbStairs(int n) {
        vector<int>arr(n+1,-1);
        return calculate(n,arr);
    }
};
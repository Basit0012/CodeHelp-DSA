class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // int n = arr.size();
        // for(int i = 0;i<n;i++){
        //     for(int j = i+1;j<n;j++){
        //         if((arr[i]+arr[j])==target){
        //             return {i+1,j+1};
        //         }
        //     }
        // }
        // return{};
        int start=0;
        int end=arr.size()-1;
        int sum=0;
        while(start<end){
            sum = arr[start] + arr[end];
            if(sum>target){
                end--;
            }
            else if(sum<target){
                start++;
                }
                else{return {start+1,end+1};
                }
        }
        return{};
    }
};
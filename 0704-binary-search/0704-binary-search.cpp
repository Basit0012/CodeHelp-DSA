class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>target){
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& arr) {
      int buy = arr[0];
      int sell = arr[0];
      int n = arr.size();
      int profit = 0;
        for(int i=1;i<n;i++){
            if(arr[i]>sell){
                sell = arr[i];
            }
            if(arr[i]<buy){
                buy = arr[i];
                sell = arr[i];
            }
            profit=max(profit,sell-buy);
        }
        return profit;
    }
};
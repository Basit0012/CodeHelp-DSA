class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int>neg;
       vector<int>pos;

       int n = nums.size();

       for(int i=0;i<n;i++){
        if(nums[i]>=0){
            pos.push_back(nums[i]);
        }else{
            neg.push_back(nums[i]);
        }
       }
       for(int i = 0; i < neg.size(); i++){
        neg[i] = neg[i] * neg[i];
       }

       for(int i = 0; i<pos.size(); i++){
        pos[i] = pos[i] * pos[i];
       }

        // Nwgative squares need to be reveresed
       reverse(neg.begin(),neg.end());

    //    Merge neg and pos
    vector<int>ans;
    int i = 0,j=0;

    while(i<neg.size() && j < pos.size()){
        if(neg[i] < pos[j]){
            ans.push_back(neg[i]);
            i++;
        }else{
            ans.push_back(pos[j]);
            j++;
        }
    }
    while(i<neg.size()){
        ans.push_back(neg[i]);
        i++;
    }
    while(j < pos.size()){
        ans.push_back(pos[j]);
        j++;
    }

    return ans;
    }
    };
       
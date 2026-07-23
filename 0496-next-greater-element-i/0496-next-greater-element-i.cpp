class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Find next greater element array for nums1
        stack<int>st;
        vector<int>ng;
        int n = nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty())ng.push_back(-1);
            if(!st.empty())ng.push_back(st.top());
            st.push(nums2[i]);
        }
        reverse(ng.begin(),ng.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums2[i]]=ng[i];
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int sz = nums.size();
        if(sz == 1)
            return 1;
        unordered_map<int, int> freq{};
        for(int n : nums)
            freq[n]++;
        int mxf = 0;
        for(pair<int, int> p : freq)
            mxf = max(mxf, p.second);

        int ans = 50000;
        bool found = false;
        for(pair<int, int> p : freq)
        {
            found = false;
            if(p.second == mxf)
            {
                for(int i = 0; i < sz; ++i)
                {
                    if(nums[i] == p.first)
                    {
                        for(int j = sz-1; j > i; --j)
                        {
                            if(nums[j] == nums[i])
                            {
                                ans = min(ans, j-i+1);
                                found = true;
                            }
                            if(found)
                                break;
                        }
                    }
                    if(found)
                        break;
                }
            }
        }
        if(ans == 50000)
            return 1;
        return ans;
    }
};
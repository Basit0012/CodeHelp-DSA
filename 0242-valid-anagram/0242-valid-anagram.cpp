class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(s.length()!=t.length())return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i = 0; i<n; i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(auto it:mp1){
            // if value in mmp1 is not equals to value in mp2
            // then return false
                if(it.second!=mp2[it.first]){
                // if(mp1!=mp2){
                return false;
            }
        }
        return true;
    }
};
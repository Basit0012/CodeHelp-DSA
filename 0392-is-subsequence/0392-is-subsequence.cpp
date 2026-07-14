class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i<t.size() and j<s.size()){
            if(s[j]==t[i]){
              j++;
              i++;  
            }else i++;
        }
        return j==s.length();
    }
};
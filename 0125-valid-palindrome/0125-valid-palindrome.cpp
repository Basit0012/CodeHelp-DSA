class Solution {
public:
    bool check(const string& s, int i, int j){
        if(i>j)return true;
        return s[i]==s[j] and check(s,i+1,j-1);
    }
    bool isPalindrome(string s) {
        string newstr;
        for(auto it:s){
            if((it>='a' and it<='z') or (it>='A' and it<='Z')){
                newstr+=tolower(it);
            }
            if(it>='0' and it<='9')newstr+=it;
        }
        // write the code to check whether newstr is pallindrome or not
        return check(newstr,0,newstr.length()-1);
    }
};
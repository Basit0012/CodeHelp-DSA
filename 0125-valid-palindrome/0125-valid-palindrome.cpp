class Solution {
public:
    bool isPalindrome(string s) {
        string newstr;
        for(auto it:s){
            if((it>='a' and it<='z') or (it>='A' and it<='Z')){
                newstr+=tolower(it);
            }
            if(it>='0' and it<='9')newstr+=it;
        }
        // write the code to check whether newstr is pallindrome or not
        int left=0;
        int right=newstr.size()-1;
        while(left<right){
            if(newstr[left] != newstr[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
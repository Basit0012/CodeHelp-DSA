class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original = x;
        long long rev = 0;
        int rem = 0;
        

      while(x > 0){
        rem = x % 10;//Last Digit
        rev = (10 * rev) + rem;//into 10 
        x = x / 10;
      }  
    //   if(rev == original) return true;
    //   else return false;
    return rev == original;
    }
};
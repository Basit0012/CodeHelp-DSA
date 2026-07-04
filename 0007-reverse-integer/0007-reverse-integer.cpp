class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long n = x;

        while(n != 0){
            int last = n % 10;
            rev = rev * 10 + last;
            n /= 10;
        }
        if(rev < INT_MIN || rev > INT_MAX) return 0;
        return (int)rev;
    }
};
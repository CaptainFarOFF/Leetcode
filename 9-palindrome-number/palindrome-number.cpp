class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        long long n = (long long)x;
        int r=0;
        long long rev=0;

        while(n != 0){
            r = n%10;
            n/=10;
            rev = rev*10 + r;
        }

        if(rev == x){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    int reverse(int x) {
        int r=0;
        long long n= abs((long long)x);

        long long rev = 0;

        while(n != 0){
            r = n % 10;
            n/=10;
            rev = rev * 10 + r;
        }

        if(x < 0){
            rev = -rev;
        }

        if(rev < INT_MIN || rev > INT_MAX){
            return 0;
        }

        return rev;
    }
};
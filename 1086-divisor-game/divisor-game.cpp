class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n + 1, false);

        dp[2] = true;

        if (n <= 3)
            return dp[n];        

        for(int k=4; k<=n; k++){

            for(int i=1; i*i<=k; i++){
                if(k%i == 0){
                    int a = i;
                    int b = k/i;

                    if(dp[k-a] == false){
                        dp[k] = true;
                        continue;
                    }

                    if (b != k && dp[k - b] == false) {
                        dp[k] = true;
                        continue;
                    }
                }
            }
        }
        return dp[n];
    }
};
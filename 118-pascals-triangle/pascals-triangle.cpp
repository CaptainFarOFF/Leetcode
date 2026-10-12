class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> dp(n);
        dp[0].push_back(1);

        for(int i=1; i<n; i++){
            for(int j=0; j<=i; j++){
                if(j==0){
                    dp[i].push_back(1);
                    continue;
                }
                if(j==i){
                    dp[i].push_back(1);
                    continue;
                }
                dp[i].push_back(dp[i-1][j-1] + dp[i-1][j]);
            }
        }
        return dp;
    }
};
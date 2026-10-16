class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int> (n,0));

        if(n==1){
            return matrix[0][0];
        }
        for(int j=0; j<n; j++){
            dp[0][j] = matrix[0][j];
        }
        int a = INT_MAX;
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==0){
                    dp[i][j] = min(dp[i-1][j], dp[i-1][j+1]) + matrix[i][j];
                }
                else if(j==n-1){
                    dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + matrix[i][j];
                }else{
                    dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]}) + matrix[i][j];
                }
                if(i == n-1){
                    a = min(a, dp[i][j]);
                }
            }
        }
        return a;
    }
};
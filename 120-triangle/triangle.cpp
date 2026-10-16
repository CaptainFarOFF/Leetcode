class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        if(n == 1){
            return triangle[0][0];
        }
        vector<vector<int>> dp(n, vector<int>(n, 0));
        int a = INT_MAX;
        dp[0][0] = triangle[0][0];
        for(int i=1; i<n; i++){
            for(int j=0; j<i+1; j++){
                if(j==0){
                    dp[i][j] = dp[i-1][j] + triangle[i][j];
                }
                else if(j==i){
                    dp[i][j] = dp[i-1][j-1] + triangle[i][j];
                }
                else{
                    dp[i][j] = min(dp[i-1][j], dp[i-1][j-1]) + triangle[i][j];
                }
                if(i == n-1){
                    a = min(a,dp[i][j]);
                }
            }
        }
        return a;
    }
};
class Solution {
public:
    int solve(int n, vector<int>& A, vector<int> &dp){
        
        if(n<0){
            return 0;
        }
        
        if(n==0){
            return A[n];
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int pick = A[n] + solve(n-2,A,dp);
        int notPick = 0 + solve(n-1,A,dp);

        return dp[n] = max(pick,notPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n ,-1);
        return solve(n-1,nums,dp);
    }
};
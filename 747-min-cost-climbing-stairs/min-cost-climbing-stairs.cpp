class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);

        dp[0] = cost[0];
        if(n == 1)return dp[0];
        dp[1] = cost[1];
        
        int right = INT_MAX;
        
        for(int i=2; i<n; i++){
            int left = dp[i-1] + cost[i];
            if(i>1){
                right = dp[i-2] + cost[i];
            }
            dp[i] = min(left, right);
        }
        return min(dp[n-1], dp[n-2]);
    }

};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1,0);
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }

        int m;

        for(int i=0; i<=n; i++){
            if(hash[i] == 0){
                m = i;
            }
        }
        return m;
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int curr;
        int maxCurr=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1)
                count++;
            if(nums[i] == 0 || i == nums.size()-1){
                curr = count;
                count = 0;
            }
            if(curr > maxCurr){
                maxCurr = curr;
            }
        }
        return maxCurr;
    }
};
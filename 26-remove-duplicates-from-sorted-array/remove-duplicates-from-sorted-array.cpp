class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastUnique = nums[0];
        int curr = 1;
        int n = nums.size();
        int u = 1;
        int count = 1;

        while(curr < n){
            if(nums[curr] > lastUnique){
                swap(nums[curr++], nums[u++]);
                lastUnique = nums[u-1];
                count++;
            }else{
                curr++;
            }
        }
        return count;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n = nums.size();

        while(i<n && nums[i] != 0){
            i++;
        }

        if(i != n-1){
            int j=i+1;
            while(j<n) {
                if(nums[j] == 0){
                    j++;
                    continue;
                }
                if(nums[i] == 0 && nums[j] != 0){
                    swap(nums[i++], nums[j++]); 
                }
            }
        }
    }
};
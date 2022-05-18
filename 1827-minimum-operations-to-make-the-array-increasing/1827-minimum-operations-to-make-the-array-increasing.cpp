class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ctr = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                ctr += abs(nums[i] - nums[i-1]) + 1;
                nums[i] = nums[i-1] + 1;
            }
        }
        return ctr;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN;
        for(auto x : nums){
            sum += x;
            maxi = max(maxi, sum);
            if(sum < 0) sum = 0;
        }
        return maxi;
        
        // this is kadane algorithms learnt from striver
    }
};
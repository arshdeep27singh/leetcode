class Solution {
private:
    int solve(vector<int> nums, int val){
        int count = 0;
        for(auto a : nums)
            if(a >= val)
                count++;
        
        return count;
    }
public:
    int specialArray(vector<int>& nums) {
        
        int low = 0, high = 100, mid;
        while(low <= high){
            mid = low + (high - low)/2;
            int comp = solve(nums, mid); // this will tell numbers greater than mid
            if(comp == mid)
                return comp;
            if(comp > mid)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};
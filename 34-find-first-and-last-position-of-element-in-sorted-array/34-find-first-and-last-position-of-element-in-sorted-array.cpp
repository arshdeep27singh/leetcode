class Solution {
private:
    int searchFirst(vector<int> nums, int target){
        int index = -1;
        int left = 0, right = nums.size()-1, mid;
        while(left <= right){
            mid = left + (right-left)/2;
            if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
            if(nums[mid] == target)
                index = mid;
        }
        return index;
    }
    
    int searchLast(vector<int> nums, int target){
        int index = -1;
        int left = 0, right = nums.size()-1, mid;
        while(left <= right){
            mid = left + (right-left)/2;
            if(nums[mid] <= target) left = mid + 1;
            else right = mid - 1;
            if(nums[mid] == target)
                index = mid;
        }
        return index;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans(2);
        ans[0] = searchFirst(nums, target);
        ans[1] = searchLast(nums, target);
        
        return ans;
    }
};
class Solution {
private:
    
    int searchfirst(vector<int> nums, int target){    
        int left = 0, right = nums.size()-1, mid, index = -1;
        while(left <= right){
            
            mid = left + (right-left)/2;
            
            if(nums[mid] == target){
                index = mid;
                right = mid - 1;
            }
            else if(nums[mid] < target)  left = mid + 1;
            else right = mid - 1;
        }
        return index;
    }
    
    int searchlast(vector<int> nums, int target){
        int left = 0, right = nums.size()-1,  mid, index = -1;
        while(left <= right){
            
            mid = left + (right-left)/2;
            
            if(nums[mid] == target){
                index = mid;
                left = mid + 1;
            } else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return index;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        
        res.push_back(searchfirst(nums, target));
        res.push_back(searchlast(nums, target));
        
        return res;
    }
};
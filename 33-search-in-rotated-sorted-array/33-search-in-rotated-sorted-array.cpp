class Solution {
private:
    int getPivot(vector<int> nums){
        
        int left = 0, right = nums.size()-1, mid;
        
        while(left < right){
            
            mid = left + (right-left)/2;
            if(nums[mid] >= nums[0]) left = mid + 1;
            else right = mid;
        }
        return left;
    }
    
    int binarySearch(vector<int> nums, int start, int end, int target){
        int left = start, right = end, mid;
        
        while(left <= right){
            mid = left + (right-left)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                left = mid + 1;
            else 
                right = mid - 1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums), n = nums.size();
        if(target >= nums[pivot] && target <= nums[n-1]){
            // search in the second line
            return binarySearch(nums, pivot, n-1, target);
        } else // search in the first line
            return binarySearch(nums, 0, pivot-1, target);
        
    }
};
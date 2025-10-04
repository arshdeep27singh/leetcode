class Solution {
    public boolean search(int[] nums, int target) {
        int low = 0, high = nums.length-1;

    while(low <= high){
        int mid = low + (high-low)/2;
        // found at mid index
        if(nums[mid] == target) return true;
        // if due to duplicates, left, right and mid are equal increment and decrement to ignore duplicates
        if((nums[low] == nums[mid]) && (nums[mid] == nums[high])){
            low++;
            high--;
            continue;
        }
        // left sorted
        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target <= nums[mid])
                high = mid - 1;
            else    
                low = mid + 1;
        }
        // right sorted if not above 
        else {
            if(nums[mid] <= target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
    }
}
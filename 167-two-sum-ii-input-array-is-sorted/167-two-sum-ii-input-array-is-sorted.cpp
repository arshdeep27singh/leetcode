class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        if(numbers.size() == 0 || numbers.size() < 2)
            return ans;
        int left = 0, right = numbers.size()-1, v;
        while(left < right){
            v = numbers[left] + numbers[right];
            if(v == target){
                ans.insert(ans.end(), {left + 1, right + 1});
                break;
            } else if(v > target)
                right--;
            else
                left++;
            }
        return ans;
    }
};
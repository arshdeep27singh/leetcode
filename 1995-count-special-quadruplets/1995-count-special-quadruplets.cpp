class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        /* int ctr = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++)
                for(int k=j+1; k<nums.size(); k++)
                    for(int l=k+1; l<nums.size(); l++)
                        if((nums[i] + nums[j] + nums[k]) == nums[l])
                            ctr++;
            }
        return ctr; */
        
        int res = 0, n = nums.size();
        unordered_map<int, int> freq;
        reverse(nums.begin(), nums.end());
        
        freq[nums[0]]++;
        for(int i=1; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    res += freq[nums[i] + nums[j] + nums[k]];
                }
            }
            freq[nums[i]]++;
        }
        return res;
    }
};
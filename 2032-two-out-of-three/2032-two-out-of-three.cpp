class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        bool ctr[3][101] = {};
        for(auto x : nums1)
            ctr[0][x] = 1;
        for(auto x : nums2)
            ctr[1][x] = 1;
        for(auto x : nums3)
            ctr[2][x] = 1;
        
        vector<int> ans;
        for(int i=0; i<101; i++){
            if(ctr[0][i] + ctr[1][i] + ctr[2][i] > 1)
                ans.push_back(i);
        }
        return ans;
    }
};
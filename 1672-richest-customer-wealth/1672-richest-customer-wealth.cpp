class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0; i<accounts.size(); i++){
            int sum = 0;
            for(int value : accounts[i])
                sum += value;
            ans = max(ans, sum);
        }  
        return ans;
    }
};
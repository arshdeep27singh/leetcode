class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int ctr = 1;
        vector<string> ans;
        for(int i=0; i<target.size(); i++){
            if(ctr == target[i])
                ans.push_back("Push");
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
                i--;
            }
            ctr++;
        }
        return ans;
    }
};
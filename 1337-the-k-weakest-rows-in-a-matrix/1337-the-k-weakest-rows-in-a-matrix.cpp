class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> vect;
        vector<int> ans;
        
        for(int i=0; i<mat.size(); i++){
            int count = 0;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j] == 1)
                    count++;
            }
            vect.push_back(make_pair(count, i));
        }
        
        sort(vect.begin(), vect.end());
        for(int i=0; i<k; i++)
            ans.push_back(vect[i].second);

        return ans;
    }
};
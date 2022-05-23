class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        
        int i = m-1, j = 0, count = 0;
        
        while(i>=0 && i<m && j>=0 && j<n){
            if(grid[i][j] < 0){
                count += n - j;
                i--;
            } else
                j++;
        }
        return count;
    }
};
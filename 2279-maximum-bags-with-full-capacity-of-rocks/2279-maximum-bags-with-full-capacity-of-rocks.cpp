class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> temp(n);
        
        for(int i=0; i<n; i++){
            temp[i] = capacity[i] - rocks[i];
        }
        sort(begin(temp), end(temp));
        int ctr = 0;
        for(auto a : temp){
            if(a <= additionalRocks){
                additionalRocks -= a;
                ctr++;
            }
        }
        return ctr;
    }
};
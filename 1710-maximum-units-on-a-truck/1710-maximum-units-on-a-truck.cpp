class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), 
        [](auto const &a, auto const &b) { return a[1] > b[1]; });
        int operations = 0;
        for(int i=0; i<boxTypes.size(); i++){
                if(boxTypes[i][0] <= truckSize){
                    operations += boxTypes[i][0] * boxTypes[i][1];
                    truckSize -= boxTypes[i][0];        
            } else if(truckSize > 0){
                    operations += truckSize * boxTypes[i][1];  
                    truckSize -= boxTypes[i][0];        
                }
        }
        return operations;
    }
};
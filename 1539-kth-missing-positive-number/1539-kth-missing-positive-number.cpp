class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // for(auto a: arr)
        //     if(a <= k)
        //         k++;
        // return k;  
        
        if(k < arr[0])
            return k;
        int left = 0, right = arr.size(), mid;
        while(left < right){
            mid = left + (right - left)/2;
            if(arr[mid] - mid - 1 < k)
                left = mid + 1;
            else 
                right = mid;
        }
        return left + k;
    }
};
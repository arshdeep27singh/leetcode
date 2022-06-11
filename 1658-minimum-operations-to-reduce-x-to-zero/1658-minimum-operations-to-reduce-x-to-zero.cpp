class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        /* int ctr = 0, len = nums.size();
        while(x > 0){
            if(nums[0] < x && nums[len-1] < x){
                int maxi = max(nums[0], nums[len-1]);
                x -= maxi;
                ctr++;
                nums.remove(maxi);
            } else if(nums[0] < x && nums[len-1] > x){
                x -= nums[0];
                ctr++;
                nums.remove(nums[0]);
            } else if(nums[0] > x && nums[len-1] < x){
                x -= nums[len-1];
                ctr++;
                nums.remove(nums[len-1]);
            }
        }
        if(x <= 0) return ctr;
        return -1;
        */
        
        int len = 0, sum1 = 0, sum2 = 0;
        
        for(auto a : v) sum2 += a;
        
        sum2 -= x; // sum of the remaining elements
        
        if(sum2 == 0) return v.size();
        
        int j, i=0;
        for(j=0;j<v.size();j++)
        {
            sum1+=v[j];
			
            while(i<v.size()&&sum1>sum2) // if sum of current subaaray is greater than desired sum
                sum1-=v[i++];
				
            if(sum1==sum2)  // if sum of current subarray is equal to desired sum then update length
                len=max(len,j-i+1); // we want subarray  with maximum length 
        }
        if(!len)        // No subarray found with desired sum .
            return -1;
        return v.size()-len;
        
    }
};
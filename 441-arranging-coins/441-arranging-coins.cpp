class Solution {
public:
    int arrangeCoins(int n) {
        // if(n==1)
        //     return 1;
        // long long int ctr = 0;
        // for(int i=1; i<=n; i++){
        //     ctr += i;
        //     if(ctr > n)
        //         return i-1;
        //     else if(ctr == n)
        //         return i;
        // }
        // return 0;
        
        int left = 0, right = n;
        long curr, k;
        while(left <= right){
            k = left + (right- left)/2;
            curr = k * (k+1)/2;
            
            if(curr == n)
                return k;
            else if(curr < n)
                left = k + 1;
            else
                right = k - 1;
        }
        return right;
    }
};
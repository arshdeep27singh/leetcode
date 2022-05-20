class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)
            return 1;
        long long int ctr = 0;
        for(int i=1; i<=n; i++){
            ctr += i;
            if(ctr > n)
                return i-1;
            else if(ctr == n)
                return i;
        }
        return 0;
    }
};
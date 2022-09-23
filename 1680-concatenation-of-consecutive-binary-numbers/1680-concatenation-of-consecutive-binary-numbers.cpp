class Solution {
public:
    int mod = 1e9+7;
    int concatenatedBinary(int n) {
        // int mod = 1e9 + 7;
        long long val = 0;
        int num  = 1;
         
        while(num <= n){
            
            val = ((val << (1 + (int)log2(num)) % mod) + num) % mod;
            num++;
        }
        return val;
    }
};
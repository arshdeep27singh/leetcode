class Solution {
public:
    int hammingWeight(uint32_t n) {
        // int ctr = 0;
        // while(n){
        //     ctr++;
        //     n = n & n-1;
        // }
        // return ctr;
    return __builtin_popcount(n);
    }
};

//approach 2
// return __builtin_popcount(n);

//approach 3
// return bitset<32>(n).count();
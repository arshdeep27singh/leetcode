class Solution {
private:
    int mod = 1e9+7;
    long long power(int x, long long n){
        if(n == 0)
            return 1;
        long long temp = power(x, n/2);
        if(n%2 == 0)
            return (temp*temp)%mod;
        else
            return (((temp*temp)%mod)*x)%mod;
    }
public:
    int countGoodNumbers(long long n) {
        //we have 4 prime numbers and 5 even numbers including 0
        //so 4^odd*5^even gives us all possible good numbers
        // long long odd =power(4,n/2);
        //long long even =power(5,(n+1)/2;
        //long long ans=(even*odd)%mod;
        //return ans;
        return (power(4, n/2) * power(5, (n+1)/2))%mod;
    }
};
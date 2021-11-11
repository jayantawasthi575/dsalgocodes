class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a, a + n);
        int mod = 1000000007;
        long long sum = 0;
        for (long long i = 0; i < n; i++) {
        sum += ((a[i] % mod) * i) % (mod);
        }
        return sum % mod;
    }
};
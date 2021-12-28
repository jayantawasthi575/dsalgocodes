class Solution{
	public:
	long long int sum=0;
	void SieveOfEratosthenes(int n)
    {
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==true)
            {
                sum=sum+i;
            }
        }
    }
   	long long int prime_Sum(int n){
   	    // Code here
   	    SieveOfEratosthenes(n);
   	    return sum;
   	}    
};`
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
        for(int j=0;j<=sum;j++)
        {
            if(i==0&&j==0)
                dp[i][j]=1;
            else if(i==0)
                dp[i][j]=0;
            else if(j==0)
                dp[i][j]=1;
            else
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%1000000007;
                }
                else
                {
                    dp[i][j]=(dp[i-1][j])%1000000007;
                }
            }
        }
        return dp[n][sum];
    }	  
};
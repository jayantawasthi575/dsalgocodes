class Solution {
  public:
    long long int count(int S[], int m, int n) {
        long long int dp[m+1][n+1];
        for(long long int i=0;i<=m;i++)
        for(long long int j=0;j<=n;j++)
        {
            if(i==0&&j==0)
                dp[i][j]=1;
            else if(i==0)
                dp[i][j]=0;
            else if(j==0)
                dp[i][j]=1;
            else
            {
                if(j>=S[i-1])
                {
                    dp[i][j]=(dp[i-1][j]+dp[i][j-S[i-1]]);
                }
                else
                {
                    dp[i][j]=(dp[i-1][j]);
                }
            }
        }
        return dp[m][n];
        // code here.
    }
};
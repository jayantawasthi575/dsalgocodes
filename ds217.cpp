class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        bool dp[N+1][sum+1];
        for(int i=0;i<N+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
                dp[i][j]=false;
            else if(j==0)
                dp[i][j]=true;
            else if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            else
            dp[i][j]=dp[i-1][j];
        }
        return dp[N][sum];
    }
};
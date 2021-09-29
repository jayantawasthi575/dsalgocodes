class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        bool dp[N+1][sum+1];
        for(int i=0;i<N+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
            {
                dp[i][j]=false;
            }
            else if(j==0)
            {
                dp[i][j]=true;
            }
            else{
                int val=arr[i-1];
                if(j>=arr[i-1])
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
                
            }
        }
        // for(int i=0;i<N+1;i++)
        // {
        // for(int j=0;j<sum+1;j++)
        // {
        //     cout<<dp[i][j]<<" "; 
        // }
        // cout<<endl;
        // }
        return dp[N][sum];
    }
};
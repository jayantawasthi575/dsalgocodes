class Solution{
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    int n = nums.size();

        int dp[n+1][amount+1];
        
        for(int j = 0; j <= amount; j++)
            dp[0][j] = INT_MAX - 1;
        
        
        for(int i = 0; i <= n; i++)
            dp[i][0] = 0;
        
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= amount; j++){
                
                if(nums[i-1] <= j)
                    dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-nums[i-1]]);
                    
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][amount] == INT_MAX - 1 ? -1 : dp[n][amount];
	}
};
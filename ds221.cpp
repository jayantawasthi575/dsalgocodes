class Solution{
  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)
	        sum=sum+arr[i];
	    bool dp[n+1][sum/2+1];
	    for(int i=0;i<n+1;i++)
	    for(int j=0;j<sum/2+1;j++)
	    {
	        if(i==0&&j==0)
	            dp[i][j]=true;
	        else if(i==0)
	            dp[i][j]=false;
	        else if(j==0)
	            dp[i][j]=true;
	        else
	        {
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
	    int diff=INT_MAX;
	    for(int i=0;i<sum/2+1;i++)
	    {
	        int first=i;
	        int second=sum-i;
	        if(dp[n][i]==true and diff>abs(first-second))
	        {
	            diff=abs(first-second);
	        }
	    }
	    return diff;
	} 
};
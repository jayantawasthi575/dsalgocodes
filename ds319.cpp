class Solution{
  public:
    /*You are required to complete this method */
    int dp[1001][1001];
    bool solve(string A,string B,string C,int n,int m,int len)
    {
        if(len==0)
        return 1;
        if(dp[n][m]!=-1)
        return dp[n][m];
        int a,b;
        a=b=0;
        if(n-1>=0 and A[n-1]==C[len-1])
        a=solve(A,B,C,n-1,m,len-1);
        if(m-1>=0 and B[m-1]==C[len-1])
        b=solve(A,B,C,n,m-1,len-1);
        return dp[n][m]=a or b;
    }
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int len1=A.length();
        int len2=B.length();
        int len3=C.length();
        if(len1+len2!=len3)
        return 0;
        memset(dp,-1,sizeof(dp));
        return solve(A,B,C,len1,len2,len3);
    }
};
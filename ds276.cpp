class Solution{
    public:
    /*You are required to complete below method */
    long long int dp[1001][1001];
    long long int func(int i,int j,string &s)
    {
        if(i>j)
        return 0;
        if(i==j)
        return 1;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(s[i]==s[j])
        return dp[i][j]=(func(i+1,j,s)+func(i,j-1,s)+1)%1000000007;
        else
        return dp[i][j]=(1000000007+func(i+1,j,s)+func(i,j-1,s)-func(i+1,j-1,s))%1000000007;
    }
    long long int  countPS(string str)
    {
       //Your code here
       int n=str.length();
       memset(dp,-1,sizeof(dp));
       return func(0,n-1,str);
    }
};
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
        {
            if(i==0||j==0)
                t[i][j]=0;
            else if(S1[i-1]==S2[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=0;
        }
        int max=INT_MIN;
        for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
        {
            if(t[i][j]>max)
            max=t[i][j];
        }
        return max;
    }
};
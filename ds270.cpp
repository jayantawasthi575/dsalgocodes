class Solution
{
public:
    unordered_map<string,int> dp;
    int solve(string A,vector<string> &B)
    {
        int sz=A.length();
        if(sz==0)
        return 1;
        if(dp[A]!=0)
        return dp[A];
        for(int i=1;i<=sz;i++)
        {
            int f=0;
            string ss=A.substr(0,i);
            for(int j=0;j<B.size();j++)
            {
                if(ss.compare(B[j])==0)
                {
                    f=1;
                    break;
                }
            }
        if(f==1 and solve(A.substr(i,sz-i),B)==1)
        return dp[A]=1;
        }
        return dp[A]=-1;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        int x=solve(A,B);
        if(x==1)
        return 1;
        else
        return 0;
    }
};
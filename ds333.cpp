class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int t[1002][1002];
    int lc(int x,int y,string s1,string s2)
    {
        if(x==0||y==0)
        return 0;
        if(t[x][y]!=-1)
        return t[x][y];
        if(s1[x-1]==s2[y-1])
        return t[x][y]=1+lc(x-1,y-1,s1,s2);
        else
        return t[x][y]=max(lc(x-1,y,s1,s2),lc(x,y-1,s1,s2));
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        memset(t,-1,sizeof(t));
        lc(x,y,s1,s2);
        return t[x][y];
    }
};
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        if(x==0||y==0)
            return 0;
        else
        {
            if(s1[x-1]==s2[y-1])
                return 1+lcs(x-1,y-1,s1,s2);
            else
            {
                return max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
            }
        }
    }
};
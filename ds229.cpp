class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        string B=A;
        reverse(B.begin(),B.end());
        //cout<<B;
        int x=A.length();
        int y=B.length();
        int t[x+1][y+1];
        for(int i=0;i<x+1;i++)
        for(int j=0;j<y+1;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
            else if(A[i-1]==B[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        //cout<<t[x-1][y-1]<<endl;
        return t[x][y];
    }
};
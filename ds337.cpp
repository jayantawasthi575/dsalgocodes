class Solution{   
public:
    int findMinInsertions(string S){
        // code here 
        string b=S;
        reverse(S.begin(),S.end());
        int cnt=b.length();
        int temp[cnt+1][cnt+1];
        for(int i=0;i<cnt+1;i++)
        for(int j=0;j<cnt+1;j++)
        {
            if(i==0||j==0)
            temp[i][j]=0;
        }
        for(int i=1;i<cnt+1;i++)
        for(int j=1;j<cnt+1;j++)
        {
            if(S[i-1]==b[j-1])
            temp[i][j]=1+temp[i-1][j-1];
            else
            {
                temp[i][j]=max(temp[i-1][j],temp[i][j-1]);
            }
        }
        return cnt-temp[cnt][cnt];
    }
};
int minDeletions(string str, int n) { 
    //complete the function here 
    string k=str;
    reverse(k.begin(),k.end());
    int t[n+1][n+1];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<n+1;j++)
    {
        if(i==0||j==0)
        t[i][j]=0;
        else if(str[i-1]==k[j-1])
        t[i][j]=1+t[i-1][j-1];
        else
        t[i][j]=max(t[i-1][j],t[i][j-1]);
    }
    return n-t[n][n];
} 
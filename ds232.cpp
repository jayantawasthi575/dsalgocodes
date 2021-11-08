class Solution{
  public:
    int countMin(string str){
    //complete the function here
    string st=str;
    reverse(st.begin(),st.end());
    int n=str.size();
    int t[n+1][n+1];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<n+1;j++)
    {
        if(i==0||j==0)
        t[i][j]=0;
        else if(str[i-1]==st[j-1])
        t[i][j]=1+t[i-1][j-1];
        else
        t[i][j]=max(t[i-1][j],t[i][j-1]);
    }
    //cout<<t[n][n]<<endl;
    return n-t[n][n];
    }
};
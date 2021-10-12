class Solution{
    public:
    //Complete this function
    void permute(string S,int l,int r,vector<string> &ss)
    {
        if(l==r)
            ss.push_back(S);
        else
        {
            for(int i=l;i<=r;i++)
            {
                swap(S[l],S[i]);
                permute(S,l+1,r,ss);
                swap(S[l],S[i]);
            }
        }
    }
    vector<string> permutation(string S)
    {
        int l=0;
        int r=S.length()-1;
        vector<string> ss;
        permute(S,l,r,ss);
        sort(ss.begin(),ss.end());
        return ss;
    }
};
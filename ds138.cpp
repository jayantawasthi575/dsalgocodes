class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int i=0,j=0;
        while(i<A.length() && j<B.length())
        {
            if(A[i]==B[j])
            {
                i++;
                j++;
            }
            else if(A[i]!=B[j])
            {
                j++;
            }
        }
        //cout<<i<<endl;
        if(i==A.length())
        {
            return true;
        }
        return false;
    }
};

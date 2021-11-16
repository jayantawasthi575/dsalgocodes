class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        while(st.size()>=2)
        {
            int i=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            if(M[i][j]==1)
            {
                st.push(j);
            }
            else
            {
                st.push(i);
            }
        }
        int i=st.top();
        st.pop();
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(M[j][i]==0||M[i][j]==1)
                return -1;
            }
        }
        return i;
    }
};
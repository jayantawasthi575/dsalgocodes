class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> v;
        for(int i=1;i<n;i++)
        {
            vector<int> v1;
            if(A[i-1]<A[i])
            {
                v1.push_back(i-1);
                i++;
                while(i<n)
                {
                    if(A[i-1]<=A[i])
                    {
                        i++;
                    }
                    else break;
                }
                v1.push_back(i-1);
                v.push_back(v1);
            }
        }
        return v;
    }
};
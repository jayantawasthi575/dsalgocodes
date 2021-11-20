class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<int,vector<int>,greater<int>> q1;
        for(int i=0;i<K;i++)
        for(int j=0;j<K;j++)
        {
            q1.push(arr[i][j]);
        }
        vector<int> g1;
        for(int i=0;i<K*K;i++)
        {
            g1.push_back(q1.top());
            q1.pop();
        }
        return g1;
    }
};
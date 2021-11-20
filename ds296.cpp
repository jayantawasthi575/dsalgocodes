class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int>  q1;
        for(int i=0;i<n;i++)
        {
            q1.push(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            q1.push(b[i]);
        }
        vector<int> ab;
        for(int i=0;i<n+m;i++)
        {
            ab.push_back(q1.top());
            q1.pop();
        }
        return ab;
    }
};
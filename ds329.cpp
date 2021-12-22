class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int N = S.size();
        vector<int> lastOccur(256, -1);
        int res = 0;
        int i = 0;
        for(int j = 0; j < N; j++)
        {
            i = max(i, lastOccur[S[j]] + 1);
            
            res = max(res, j - i + 1);
            
            lastOccur[S[j]] = j;
        }
        return res;
    }
};
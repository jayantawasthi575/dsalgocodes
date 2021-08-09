class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> ma;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ma.find(k-arr[i])!=ma.end())
            {
                cnt=cnt+ma[k-arr[i]];
            }
            ma[arr[i]]++;
        }
        return cnt;
    }
};
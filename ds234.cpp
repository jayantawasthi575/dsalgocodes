class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comparison(Job m1,Job m2)
    {
        if(m1.profit>m2.profit)
        {
            return true;
        }
        return false;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comparison);
        int maxi=arr[0].dead;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i].dead);
        }
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++)
        slot[i]=-1;
        int job=0;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(slot[j]==-1)
                {
                    slot[j]=i;
                    profit=profit+arr[i].profit;
                    job++;
                    break;
                }
            }
        }
        vector<int> ans;
        ans.push_back(job);
        ans.push_back(profit);
        return ans;
    } 
};
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(Item a,Item b)
    {
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        if(r1>r2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,cmp);
        double value=0.0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            if(curr+arr[i].weight<=W)
            {
                curr=curr+arr[i].weight;
                value=value+(double)arr[i].value;
            }
            else
            {
                int left=W-curr;
                double r1=(double)arr[i].value/(double)arr[i].weight;
                value=value+(double)left*r1;
                break;
            }
        }
        return value;
    }
        
};

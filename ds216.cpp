class Solution
{
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knap(int W,int wt[],int val[],int n,int t[1002][1002])
    {
        
       if(n==0||W==0)
        return 0;
       if(t[n][W]!=-1)
       return t[n][W];
       if(wt[n-1]>W)
       return t[n][W]=knap(W,wt,val,n-1,t);
       else
       return t[n][W]=max(knap(W,wt,val,n-1,t),val[n-1]+knap(W-wt[n-1],wt,val,n-1,t));
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
    int  t[1002][1002];
    memset(t,-1,sizeof(t));
    int rslt=knap(W,wt,val,n,t);
    return rslt;
    }
};
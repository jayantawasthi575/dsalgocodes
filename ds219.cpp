class Solution{
public:
    int epar(int N,int arr[],int mem[102][1002],int sum)
    {   
        if(sum==0)
            return 1;
        if(N==0||sum<0)
            return 0;
        if(mem[N][sum]!=-1)
            return mem[N][sum];
        if(arr[N-1]>sum)
        {
            return mem[N][sum]=epar(N-1,arr,mem,sum);
        }
        else
            return mem[N][sum]=max(epar(N-1,arr,mem,sum),epar(N-1,arr,mem,sum-arr[N-1]));
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        sum=sum+arr[i];
        if(sum%2==1)
            return 0;
        int mem[102][1002];
        memset(mem,-1,sizeof(mem));
        int rslt=epar(N,arr,mem,sum/2);
        return rslt;
    }
};
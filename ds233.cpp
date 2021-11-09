class Solution{
public:
    int mem[102][102];
    int solve(int arr[],int i,int j)
    {
        if(i>=j)
        return 0;
        if(mem[i][j]!=-1)
            return mem[i][j];
        mem[i][j]=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            mem[i][j]=min(mem[i][j],solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
        }
        return mem[i][j];
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(mem,-1,sizeof(mem));
        return solve(arr,1,N-1);
    }
};
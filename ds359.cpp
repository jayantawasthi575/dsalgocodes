class Solution{   
  public:
    int rightmostNonZeroDigit(int N, int A[]){
        // code here 
        int c5=0;
        for(int i=0;i<N;i++)
        {
            while(A[i]>0 && A[i]%5==0)
            {
                A[i]=A[i]/5;
                c5++;
            }
        }
        for(int i=0;i<N;i++)
        {
            while(c5 && A[i]>0 && A[i]%2==0)
            {
                A[i]=A[i]/2;
                c5--;
            }
        }
        long long ans=1;
        for(int i=0;i<N;i++)
        {
            ans=(ans*A[i]%10)%10;
        }
        if(c5)
        {
            ans=(ans*5)%10;
        }
        if(ans)
        return ans;
        return -1;
    }
};
class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        while(--M)
        {
            N=N/2;
        }
        return N;
    }
};
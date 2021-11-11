class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sun=S/7;
        int mul=S*M;
        int rem=mul/N;
        S=S-sun;
        if(mul%N!=0)
        rem++;
        if(S>=rem)
        return rem;
        else 
        return -1;
    }
};
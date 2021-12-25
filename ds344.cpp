class Solution{   
public:
    int checkPerfectSquare(int N)
    {
        return (sqrt(N) - floor(sqrt(N))) == 0;
    }
    
    public:
    string checkFibonacci(int N)
    {
        int res1 = 5*N*N + 4;
        int res2 = 5*N*N - 4;
        
        return (checkPerfectSquare(res1) == 1 || 
                checkPerfectSquare(res2) == 1) ?
                    "Yes" :
                    "No";
    }
};
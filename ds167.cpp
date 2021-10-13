class Solution{
    public:
    long long getNextEven(string x)
    {
        // Your code goes here  
        long long num=stoll(x);
        next_permutation(x.begin(),x.end());
        do{
            int lastdigit=x[x.size()-1]-'0';
            if(lastdigit%2==0)
            {
                long long currx=stoll(x);
                return currx > num ? currx : -1;
            }
        }while(next_permutation(x.begin(), x.end()));
        return -1;
    }
};
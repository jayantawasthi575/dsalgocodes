class Solution {
  public:
    int canReach(long long a, long long b, long long x) {
        // code here
        long steps = x-abs(a)-abs(b);
        if(steps<0)
        {
        return 0;
        }
        return (steps%2==0)?1:0;
    }
};
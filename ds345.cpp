class Solution {
  public:
    int pairCubeCount(int N) {
        // code here
        int count=0;
        for(int i=1;i<=cbrt(N);i++)
        {
            int cb=i*i*i;
            int diff=N-cb;
            int cbrtDiff=cbrt(diff);
            if(cbrtDiff*cbrtDiff*cbrtDiff==diff)
            {
                count++;
            }
        }
        return count;
    }
};
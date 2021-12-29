class Solution {
  public:
    long long nthFaithfulNum(int N) {
        // code here
        int c = 0;
        long long s =0;
        while(N>0){
        int n = N&1;
        s += n*(long)pow(7,c++);
        N = N>>1;
        }
        return s;
    }
};
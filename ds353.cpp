class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        // code here
        long long res =0;
        for(int i=0;i<32;i++){
        res = res<<1;
        int dig = X&1;
        X = X>>1;
        res = res|dig;
        }
        return res;
    }
};
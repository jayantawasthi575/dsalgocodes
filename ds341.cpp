class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        int q=N/M;
        int n1=M*q;
        int n2=(N*M)>0?(M*(q+1)):(M*(q-1));
        if (abs(N - n1) < abs(N - n2))
        return n1;
        return n2;
    }
};
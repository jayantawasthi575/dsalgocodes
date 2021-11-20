class Solution {
  public:
    int countSquares(int N) {
        // code here
        int k=0;
        int i=1;
        while(true)
        {
            if(i*i<N)
            k++;
            else
            break;
            i++;
        }
        return k;
    }
};
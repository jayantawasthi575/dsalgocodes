class Solution {
  public:
    int numsGame(int N) {
        // code here
        if(N%2==0) // As everytime N is even, Tom wins
        return 1;
        else
        return 0;
    }
};
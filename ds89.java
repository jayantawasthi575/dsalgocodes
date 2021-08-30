class Solution {
    int isPlaindrome(String S) {
        int k=S.length();
        int i=k/2,j=0;
        while(j<=i)
        {
            if(S.charAt(j)!=S.charAt(k-j-1))
                return 0;
            j++;
        }
        return 1;
    }
};
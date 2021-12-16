class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        int a=0;
        int ab=0;
        int abc=0;
        int mod=1000000007;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='a')
            {
                a=((2*a)%mod+1)%mod;
            }
            else if(ch=='b')
            {
                ab=((2*ab)%mod+a)%mod;
            }
            else if(ch=='c')
            {
                abc=((2*abc)%mod+ab)%mod;
            }
        }
        return abc%mod;
    }
};

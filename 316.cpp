class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       int len1=s1.size();
       int len2=s2.size();
       if(len1==0||len2==0)
       return "0";
       int n1=0,n2=0;
       if(s1[0]=='-')
       {
           n1=1;
       }
       else if(s2[0]=='-')
       {
           n2=1;
       }
       if(s1[0]=='-'&&s2[0]=='-')
       {
           n1=1;
           n2=1;
       }
       int i_n1=0;
       int i_n2=0;
       vector<int> result(len1+len2,0);
       for (int i=len1-1; i>=n1; i--)
       {
            int carry = 0;
            int n1 = s1[i] - '0';
            i_n2 = 0;        
            for (int j=len2-1; j>=n2; j--)
            {
                int n2 = s2[j] - '0';
                int sum = n1*n2 + result[i_n1 + i_n2] + carry;
                carry = sum/10;
                result[i_n1 + i_n2] = sum % 10;
                i_n2++;
            }
            if (carry > 0)
                result[i_n1 + i_n2] += carry;
            i_n1++;
        }
        int i = result.size() - 1;
        while (i>=0 && result[i] == 0)
        i--;
        if (i == -1)
        return "0";
        string s = "";
        if(n1==1&&n2==1)
        {
         while (i >= 0)
            s += to_string(result[i--]);
         return s;
        }
        if(n1==1||n2==1)
        {
            s=s+"-";
        }
        while (i >= 0)
            s += to_string(result[i--]);
        return s;
    }
};
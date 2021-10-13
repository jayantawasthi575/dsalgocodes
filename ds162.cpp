class Solution{
  public:
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        int mi=INT_MAX;
        if(N==0)
            return "-1";
        string c=arr[0];
        for(int i=1;i<N;i++)
        {
            int j=0,k=0;
            int a=0;
            while(j<c.size() && k<arr[i].size())
            {
                if(c[j]==arr[i][k])
                    a++;
                else
                    break;
                j++;
                k++;
            }
            mi=min(mi,a);
        }
        if(mi>0)
        return c.substr(0,mi);
        return "-1";
    }
};

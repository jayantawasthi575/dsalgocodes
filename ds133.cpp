class Solution
{
  public:
        int getCount (string S, int N)
        {
            unordered_map<char,int> s1;
            int l=0;
            char p=S[0];
            s1[p]++;
            for(int i=1;i<S.length();i++)
            {   
                if(p!=S[i])
                {
                    s1[S[i]]++;
                    p=S[i];
                }
                else
                    continue;
            }
            for(auto m:s1)
            {
                if(m.second==N)
                {
                    l++;
                }
            }
            if(N==0)
            {
                for(int i=97;i<=122;i++)
                {
                    if(s1[char(i)]==0)
                    l++;
                }
            }
            return l;
        }
};
class Solution{
  public:
    bool isValid(int count[], int k)
    {
        int val = 0;
        for (int i=0; i<26; i++)
            if (count[i] > 0)
                val++;
     
        return (k >= val);
    }
    int longestKSubstr(string s, int k) {
    // your code here
     int u=0;
     int n=s.length();
     int count[26];
     memset(count, 0, sizeof(count));
     for(int i=0;i<n;i++)
     {
         if(count[s[i]-'a']==0)
         u++;
         count[s[i]-'a']++;
     }
     if(u<k)
     return -1;
     int start=0,end=0;
     int max=1,min=0;
     memset(count, 0, sizeof(count));
     count[s[0]-'a']++;
     for(int i=1;i<n;i++)
     {
         count[s[i]-'a']++;
         end++;
         while (!isValid(count, k))
        {
            count[s[start]-'a']--;
            start++;
        }
        if (end-start+1 > max)
        {
            max = end-start+1;
            min = start;
        }
     }
     return max;
    }
};

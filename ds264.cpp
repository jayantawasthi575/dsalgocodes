class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        int hashStr[26]={0};
        for(int i=0;i<s.size();i++)
        {
            hashStr[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(hashStr[s[i]-'a']>1)
            return s[i];
        }
        return '#';
    }
};
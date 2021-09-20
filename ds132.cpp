class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
           int hashStr1[26]={0};
           int hashStr2[26]={0};
           for(auto x:A)
           {
               hashStr1[x-'a']++;
           }
           for(auto x:B)
           {
               hashStr2[x-'a']++;
           }
           string res="";
           for(int i=0;i<26;i++)
           {
                if(hashStr1[i] != 0 and hashStr2[i] == 0)
                {
                res += (i + 'a');
                }
                else if(hashStr1[i] == 0 and hashStr2[i] != 0)
                {
                res += (i + 'a');
                }
           }
           return res.size() == 0 ? "-1" : res;
        }
};
class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        string res="";
        unordered_map<char,int> m;
        for(int i=0;i<s2.size();i++)
            m[s2[i]]=1;
        for(int i=0;i<s1.size();i++)
        {   
            if(m.find(s1[i])==m.end())
                res=res+s1[i];
            else
                m[s1[i]]=2;
        }
        for(int i=0;i<s2.size();i++)
        {
            if(m[s2[i]]==1)
                res=res+s2[i];
        }
        if(res.length()>0)
        return res;
        else
        return "-1";
    }
};
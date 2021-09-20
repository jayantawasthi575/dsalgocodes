class Solution {
  public:
    string removeChars(string string1, string string2) {
        int arr[26]={0};
        for(int i=0;i<string2.length();i++)
        {
            arr[string2[i]-'a']++;
        }
        string s2="";
        for(int i=0;i<string1.length();i++)
        {
            if(arr[string1[i]-'a']>0)
            {
                continue;
            }
            else
            {
                s2=s2+string1[i];
            }
        }
        return s2;
    }
};
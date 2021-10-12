class Solution {
  public:
    bool isSubsequence(string str1,string str2)
    {
        int m=str1.length(),n=str2.length();
        int j=0;
        for(int i=0;i<n && j<m;i++)
        {
         if(str1[j]==str2[i])
         j++;
        }
        return (j==m);
    }
    string findLongestWord(string S, vector<string> d) {
        // code here
        string result="";
        int length=0;
        for(string word:d)
        {
            if(length<=word.length() && isSubsequence(word,S))
            {   
                if(length==word.length() && word>result)
                continue;
                result=word;
                length=word.length();
            }
        }
        return result;
    }
};
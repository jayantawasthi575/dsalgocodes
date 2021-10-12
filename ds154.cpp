vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       //Your code here
       vector<string> res;
       for(auto word:dict)
       {
           if(word.size()!=pattern.size())
           {
               continue;
           }
           int hash1[26]={0};
           int hash2[26]={0};
           int i;
           for(i=0;i<word.size();i++)
           {
               if(hash1[word[i]-'a']==hash2[pattern[i]-'a'])
               {
                   hash1[word[i]-'a']++;
                   hash2[pattern[i]-'a']++;
               }
               else
               {
                   break;
               }
           }
           if(i==word.size())
           {
               res.push_back(word);
           }
       }
       return res;
}
class Solution
{
    public:
        int countWords(string list[], int n)
        {
           unordered_map<string,int> count;
           for(int i=0;i<n;i++)
           {
               count[list[i]]++;
           }
           int cu=0;
           for(auto it:count)
           {
               if(it.second==2)
               cu++;
           }
           return cu;
        }
};
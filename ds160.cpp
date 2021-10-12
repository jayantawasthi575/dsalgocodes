class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
      unordered_map<string,int> mp;
      for(int i=0;i<n;i++)
      {
          mp[arr[i]]++;
      }
      int first=INT_MIN,second=INT_MIN;
      for(auto it:mp)
      {
          if(it.second>first)
          {
              second=first;
              first=it.second;
          }
           else if (it.second > second &&  it.second != first)
            second = it.second;
      }
      for(auto it:mp)
      {
          if(it.second==second)
          {
            return it.first;    
          }
      }
    }
};
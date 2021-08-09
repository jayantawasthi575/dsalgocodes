class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {   
       unordered_map<int,int> se;
       vector<int> sep;
       for(int i=0;i<n;i++)
       {
           if(se.find(arr[i])==se.end())
           {
               se[arr[i]]++;
               sep.push_back(arr[i]);
           }
       }
       return sep;
    }
};
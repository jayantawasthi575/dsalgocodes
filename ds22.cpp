class Solution
{
    public:
 
    int peakElement(int arr[], int n)
    {
      unordered_map<int,int> store;
      for(int i=0;i<n;i++)
      store[i]=arr[i];
      sort(arr,arr+n);
      for(auto itr:store)
      if(itr.second==arr[n-1])
      return itr.first;
      return -1;
    }
};
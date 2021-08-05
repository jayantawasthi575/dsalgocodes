class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map<int,int> store;
        for(int i=0;i<n;i++)
          store[arr[i]]++;
        vector<int> send;
         for(auto itr:store)
         {
             if(itr.second>1)
                send.push_back(itr.first);
         }
         sort(send.begin(),send.end());
         if(send.size()==0)
         send.push_back(-1);
         return send;
    }
};

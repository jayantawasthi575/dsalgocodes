class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
       unordered_map<int,int> hash;
       for(int i=0;i<n;i++)
       hash[arr[i]]++;
       for(auto it:hash)
       if(it.second%2!=0)
       return it.first;
    }
};
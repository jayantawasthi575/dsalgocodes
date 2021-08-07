class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(),array.end());
        int k=1;
        for(int i=0;i<array.size();i++)
        {
            if(array[i]!=k)
            return k;
            k++;
        }
        return k;
    }
};
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        if(n==1)
        {
            vector<long long int> ans;
            ans.push_back(1);
            return ans;
        }
        long long int left[n];
        long long int right[n];
        left[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]*nums[i];
        }
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i];
        }
        vector<long long int> ans;
        ans.push_back(right[1]);
        for(int i=1;i<n-1;i++)
        {
            ans.push_back(left[i-1]*right[i+1]);
        }
        // for(int i=0;i<n;i++)
        // cout<<left[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // cout<<right[i]<<" ";
        // cout<<endl;
        ans.push_back(left[n-2]);
        return ans;
    }
};
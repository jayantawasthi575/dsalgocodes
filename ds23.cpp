class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {   
        vector<int> add;
        int first=0,second,sum=arr[0];
        if(sum==s)
        {
            add.push_back(1);
            add.push_back(1);
            return add;
        }
        for(int i=1;i<n;i++)
        {
            sum=sum+arr[i];
            second=i;
            if(sum>s)
            {
                while(sum>s)
                {
                    sum=sum-arr[first];
                    first++;
                }
                if(sum==s)
                {
                 add.push_back(first+1);
                 add.push_back(second+1);
                 return add;
                }
            }else if(sum==s)
            {
                add.push_back(first+1);
                add.push_back(second+1);
                return add;
            }
        }
        add.push_back(-1);
        return add;
    }
};
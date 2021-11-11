class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxsum=INT_MIN;
        long long cursum=0;
        for(int i=0;i<n;i++)
        {
            cursum=cursum+arr[i];
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
            if(cursum<0)
            cursum=0;
        }
        return maxsum;
    }
};
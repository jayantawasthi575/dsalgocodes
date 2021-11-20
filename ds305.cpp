class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count=0;
	    sort(arr,arr+n);
	    for(long long i=0;i<n-2;i++)
	    {
	        long long j=i+1;
	        long long k=n-1;
	        while(j<k)
	        {
	            if(arr[i]+arr[j]+arr[k]==sum)
	            {
	                k--;
	            }
	            else if(arr[i]+arr[j]+arr[k]<sum)
	            {
	                count=count+k-j;
	                //cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
	                j++;
	            }
	            else
	            {
	                k--;
	            }
	        }
	    }
	    return count;
	}
};

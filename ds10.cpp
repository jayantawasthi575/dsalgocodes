class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    sort(arr,arr+n);
	    for(int i=n-1;i>=3;i--)
	    {
	        int j=0,k=i-1;
	        while(k>j)
	        {
	            if(arr[i]*arr[i]<arr[j]*arr[j]+arr[k]*arr[k])
	            {
	                k--;
	            }
	            else if(arr[i]*arr[i]>arr[j]*arr[j]+arr[k]*arr[k])
	            {
	                j++;
	            }
	            else if(arr[i]*arr[i]==arr[j]*arr[j]+arr[k]*arr[k])
	            return true;
	        }
	    }
	    return false;
	}
};
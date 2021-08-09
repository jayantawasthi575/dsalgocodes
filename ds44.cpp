class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(i<j)
	    {
	        if(arr[i]+arr[j]>x)
	        j--;
	        else if(arr[i]+arr[j]<x)
	        i++;
	        else
	        return true;
	    }
	    return false;
	}
}; 
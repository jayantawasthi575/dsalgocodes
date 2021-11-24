class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int res=-1;
	    int start=0;
	    int end=n-1;
	    while(start<=end)
	    {
	        int mid=(start+end)/2;
	        if(arr[mid]==x)
	        {
	            end=mid-1;
	            res=mid;
	        }
	        else if(arr[mid]>x)
	        {
	            end=mid-1;
	        }
	        else
	        {
	            start=mid+1;
	        }
	    }
	    int ress=-1;
	    start=0;
	    end=n-1;
	    while(start<=end)
	    {
	        int mid=(start+end)/2;
	        if(arr[mid]==x)
	        {
	            start=mid+1;
	            ress=mid;
	        }
	        else if(arr[mid]>x)
	        {
	            end=mid-1;
	        }
	        else
	        {
	            start=mid+1;
	        }
	    }
	    if(res==-1 && ress==-1)
	    return 0;
	    return ress-res+1;
	}
};
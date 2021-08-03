class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r) {
	    l=l-1;
	    r=r-1;
	    while(l<=r)
	    {
	        int low=arr[l];
	        arr[l]=arr[r];
	        arr[r]=low;
	        l++;
	        r--;
	    }
	}

};
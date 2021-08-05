class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    int max=arr[n-1];
	    arr[n-1]=-1;
	    for(int i=n-2;i>=0;i--)
	    {
	        int store=arr[i];
	        arr[i]=max;
	        if(store>max)
	        max=store;
	    }
	}
};
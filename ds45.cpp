class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i=0,j=0;
	    for(;i<n;i++)
	    {
	        if(arr[i]>0)
	        {
	            arr[j++]=arr[i];
	        }
	    }
	    while(j<n)
	    {
	        arr[j++]=0;
	    }
	}
};

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int min=INT_MAX;
	    int index=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(min>arr[i])
	        {
	            min=arr[i];
	            index=i;
	        }
	    }
	    return index;
	}
};

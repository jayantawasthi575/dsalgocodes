class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int arr[n+m];
	    int i=0;
	    for(;i<n;i++)
	        arr[i]=arr1[i];
	    for(int j=0;j<m;j++,i++)
	        arr[i]=arr2[j];
	    i=0;
	    sort(arr,arr+n+m);
	    while(i<n)
	    {
	        arr1[i]=arr[i];
	        i++;
	    }
	    int j=0;
	    while(j<m)
	    {
	        arr2[j]=arr[i];
	        j++;
	        i++;
	    }
	}
};
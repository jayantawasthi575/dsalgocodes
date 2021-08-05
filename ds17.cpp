class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		sort(arr,arr+n);
		int i=0;
		bool found=false;
		for(;i<n;i++)
		{
		    if(arr[i]==A)
		    {
		    found=true;
		    break;
		}
		}
		if(found==false)
		return false;
		int j=A,k=B;
		int parent=arr[i];
		i=i+1;
		j=j+1;
		while(j<=k)
		{   
		    if(parent!=arr[i] && j!=arr[i])
		    return false;
		    else if(parent!=arr[i] && j==arr[i])
		    {
		    j++;
		    }
		    parent=arr[i];
		    i++;
		}
		return true;
	}
};
	
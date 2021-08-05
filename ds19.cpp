class Solution{
	public:
	void shuffleArray(int arr[],int n)
	{
	   int arr1[n/2];
	   int arr2[n/2];
	   int i=0,j=n/2;
	   while(i<n/2 && j<n)
	   {
	       arr1[i]=arr[i];
	       arr2[i]=arr[j];
	       i++,j++;
	   }
	   int k=0;
	   i=0,j=1;
	   while(k<n/2)
	   {
	       arr[i]=arr1[k];
	       arr[j]=arr2[k];
	       i+=2;
	       j+=2;
	       k++;
	   }
	}
};
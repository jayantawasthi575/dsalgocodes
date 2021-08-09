class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        sort(a,a+n);
        sort(b,b+m);
        int min;
        if(n>m)
        min=m;
        else if(m>n)
        min=n;
        else
        min=m;
        int arr[min];
        int i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            i++;
            else if(a[i]>b[j])
            j++;
            else
            {
            if(k>0 && arr[k-1]!=a[i])
            {
            arr[k]=a[i];
            k++;
            }
            else
            {
                if(k==0)
                {
                    arr[k]=a[i];
                    k++;
                }
            }
            i++;
            j++;
            }
        }
        return k;
    }
};
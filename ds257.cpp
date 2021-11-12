class Solution
{
    public:
    void merge(int a[], int l, int mid, int r)
    {
         // Your code here
         int i=l;
         int j=mid+1;
         int k=l;
         int b[l+r+1];
         while(i<=mid && j<=r)
         {
             if(a[i]<a[j])
             {
                 b[k]=a[i];
                 i++;
             }
             else
             {
                 b[k]=a[j];
                 j++;
             }
             k++;
         }
         if(i>mid)
         {
             while(j<=r)
             {
                 b[k]=a[j];
                 j++;
                 k++;
             }
         }
         else
         {
             while(i<=mid)
             {
                 b[k]=a[i];
                 i++;
                 k++;
             }
         }
         for(int i=l;i<=r;i++)
         {
             a[i]=b[i];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};
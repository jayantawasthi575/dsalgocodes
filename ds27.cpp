class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        n=n-1;
        int index=n;
        int left=0,right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(a[mid]==b[mid])
            left=mid+1;
            else
            {
                index = mid;
                right = mid - 1;
            }
        }
        return index;
    }
};
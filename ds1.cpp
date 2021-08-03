class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        int i,c=0,j=0,k=0;
        for(i=0;i<n;i++)
        { 
          j=i+1;
          k=n-1;
          while(j<k)
          {
              if(arr[i]+arr[j]+arr[k]>0)
              k--;
              else if(arr[i]+arr[j]+arr[k]<0)
              j++;
              else
              return true;
          }
        }
        return false;
    }
};

vector<int> find(int arr[], int n , int x )
{
    // code here
   int res=-1;
   int start=0;
   int end=n-1;
   while(start<=end)
   {
       int mid=(start+end)/2;
       if(arr[mid]==x)
       {
           res=mid;
           end=mid-1;
       }
       else if(arr[mid]>x)
       {
           end=mid-1;
       }
       else
       {
           start=mid+1;
       }
   }
   vector<int> ans;
   ans.push_back(res);
   res=-1;
   start=0;
   end=n-1;
   while(start<=end)
   {
       int mid=(start+end)/2;
       if(arr[mid]==x)
       {
           res=mid;
           start=mid+1;
       }
       else if(arr[mid]>x)
       {
           end=mid-1;
       }
       else
       {
           start=mid+1;
       }
   }
   ans.push_back(res);
   return ans;
}
class Solution{
public:
	int findMaximum(int arr[], int n) { 
       int l=0,h=n-1;
       while(l<=h)
       {
           int mid=l+(h-l)/2;
           if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
           {
           //cout<<mid<<endl;
           return arr[mid];
           }
           else if(arr[mid]>arr[mid-1] && arr[mid+1]>arr[mid])
           l=mid+1;
           else if(arr[mid]<arr[mid-1] && arr[mid+1]<arr[mid])
           h=mid-1;
       }
	}
};
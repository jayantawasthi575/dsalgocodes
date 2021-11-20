class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ar=new int[2];
        sort(arr,arr+n);
        int flag=0;
        if(arr[0]==2)
        ar[1]=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==1)
            continue;
            else if(arr[i+1]-arr[i]==0)
            ar[0]=arr[i];
            else if(arr[i+1]-arr[i]==2&&flag==0)
            {
            ar[1]=arr[i]+1;
            flag=1;
            }
        }
        if(n!=arr[n-1])
        ar[1]=n;
        //cout<<endl;
        return ar;
    }
};
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {    
       sort(a,a+n);
       if(n<3)
       return -1;
       return a[n-3];
    }
};
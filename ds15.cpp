class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
       sort(a,a+n);
       sort(b,b+m);
       return a[n-1]*b[0];
    }
};
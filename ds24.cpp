class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int i=0,j=n-1,firstsum=0,secondsum=0;
        if(n==1)
        return 1;
        firstsum=firstsum+a[0];
        secondsum=secondsum+a[n-1];
        while(j>i)
        {
            if(firstsum>secondsum)
            {
                j--;
                secondsum=secondsum+a[j];
            }
            else if(secondsum>firstsum)
            {
                i++;
                firstsum=firstsum+a[i];
            }
            else if(firstsum==secondsum && j==i+2)
            {
                return i+2;
            }
            else
            {
                j--;
                i++;
                secondsum=secondsum+a[j];
                firstsum=firstsum+a[i];
            }
        }
        return -1;
    }
};
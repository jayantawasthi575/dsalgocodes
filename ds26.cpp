class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            zero++;
            else if(a[i]==1)
            one++;
            else if(a[i]==2)
            two++;
        }
        int k=0;
        while(k<zero)
        {
            a[k]=0;
            k++;
        }
        while(k<zero+one)
        {
            a[k]=1;
            k++;
        }
        while(k<zero+one+two)
        {
            a[k]=2;
            k++;
        }
     }
};
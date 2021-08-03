
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int i=0,j=0,min=-1,p=-1,r=-1;
        while(i<n || j<n)
        {
            if(i>-1 && a[i]==x && i<n)
            {
                p=i;
            }
            if(j>-1 && a[j]==y && j<n)
            {
                r=i;
            }
            if(r>-1 && p>-1 && min==-1)
            {
                min=abs(p-r);
            }
            else if(r>-1 && p>-1 && min>abs(p-r))
            {
                min=abs(p-r);
            }
            i++;
            j++;
        }
        return min;
    }
};
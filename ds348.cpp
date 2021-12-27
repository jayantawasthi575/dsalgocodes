class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int fin=0;
        if(date%2==0)
        {
            int i=0;
            while(i<n)
            {
                if(car[i]%2==1)
                fin=fin+fine[i];
                i++;
            }
        }
        else
        {
            int i=0;
            while(i<n)
            {
                if(car[i]%2==0)
                fin=fin+fine[i];
                i++;
            }
        }
        return fin;
    }
};
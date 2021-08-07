class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        sort(a,a+size);
        int temp=a[0];
        int count=0;
        for(int i=1;i<size;i++)
        {
          if(temp==a[i])
          count++;
          else
          {
              if(count>=size/2)
              {
                  return temp;
              }
              else
              {
                  temp=a[i];
                  count=0;
              }
          }
        }
        //cout<<temp<<endl;
        if(count>=size/2)
        return temp;
        else
        return -1;
    }
};
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
    sort(a,a+size);
    int cnt=1;
    int carry=a[0];
    int mark=1;
    int flag=a[0];
    for(int i=1;i<size;i++)
    {
        if(carry==a[i])
        {
           // cout<<cnt<<" "<<mark<<" "<<flag<<endl;
            cnt++;
        }
        else 
        {   
            if(cnt>mark)
            {
                if(mark>size/2)
                    return flag;
                mark=cnt;
                flag=carry;
            }
            carry=a[i];
            cnt=1;
        }
    }
    if(cnt>mark)
    {
        mark=cnt;
        flag=carry;
    }
    //cout<<size<<endl;
    if(mark>size/2)
        return flag;
    else
        return -1;
    }
};
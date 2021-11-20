vector<int> find(int arr[], int n , int x )
{
    // code here
    int flag=0;
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x&&flag==0)
        {
            first=i;
            last=i;
            flag=1;
        }
        else if(arr[i]==x)
        {
            last=i;
        }
    }
    vector<int> tp;
    tp.push_back(first);
    tp.push_back(last);
    return tp;
}
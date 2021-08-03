int findMax(Height arr[], int n)
{
    int res=INT_MIN;
    for(int i = 0; i < n; i++)
    {
        res = max(res, arr[i].feet*12 + arr[i].inches);
    }
    return res;
}
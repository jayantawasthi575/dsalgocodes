class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        int count=0,i=0;
        while(K>=0 && i<arr.size())
        {
            K=K-arr[i];
            //cout<<K<<endl;
            i++;
            if(K>=0)
            count++;
        }
        return count;
    }
};
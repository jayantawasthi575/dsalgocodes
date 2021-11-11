class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long int i=0;
        long long int min=INT_MAX;
        while(i+m-1<n)
        {
            long long int diff=a[i+m-1]-a[i];
            //cout<<diff<<endl;
            if(min>diff)
            min=diff;
            i++;
        }
        return min;
    }   
};
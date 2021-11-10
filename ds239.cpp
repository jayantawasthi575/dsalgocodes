class Solution
{
public:
    static bool comp(int a1,int a2)
    {
        if(a1<a2)
        return true;
        else 
        return false;
    }
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int min=0;
        int i=0;
        int p=N;
        while(i<N)
        {
            min=min+candies[i];
            i++;
            N=N-K;
        }
        N=p;
        reverse(candies,candies+N);
        int max=0;
        i=0;
        //cout<<candies[i]<<endl;
        while(i<N)
        {
            max=max+candies[i];
            i++;
            N=N-K;
        }
        vector<int> kp;
        kp.push_back(min);
        kp.push_back(max);
        return kp;
    }
};
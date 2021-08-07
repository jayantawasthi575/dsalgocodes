class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
       map<int,int> ma;
       for(int i=0;i<N;i++)
       {
           ma[arr[i]]++;
           arr[i]=0;
       }
       for(auto itr:ma)
       {   
           //cout<<itr.first<<" "<<itr.second<<endl;
           if(itr.first-1<N && itr.first-1>-1)
           arr[itr.first-1]=itr.second;
       }
    }
};

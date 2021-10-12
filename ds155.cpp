class Solution{
  public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int> count;
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        int max=0;
        vector<string> w;
        for(auto it:count)
        {
            if(it.second>max)
            {   
                if(!w.empty())
                {
                    w.pop_back();
                    w.pop_back();
                }
                w.push_back(it.first);
                w.push_back(to_string(it.second));
                max=it.second;
            }
            else if(it.second==max && w[0]>it.first)
            {
                w.pop_back();
                w.pop_back();
                w.push_back(it.first);
                w.push_back(to_string(it.second));
            }
        }
        return w;
    }
};
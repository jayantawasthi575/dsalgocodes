class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<int> q;
        for(auto x:mp)
        {
            q.push(x.second);
        }
        while(k!=0)
        {
            int x=q.top();
            //cout<<x<<endl;
            q.pop();
            x--;
            q.push(x);
            k--;
        }
        int sum=0;
        while(!q.empty())
        {
            //cout<<"hello"<<endl;
            int d=q.top();
            //cout<<d;
            sum=sum+(d*d);
            q.pop();
        }
        return sum;
    }
};
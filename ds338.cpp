class Solution
{
    public:
    string rearrangeString(string str)
    {
        //code here
        unordered_map<char,int> hashmap; 
        for(auto c : str) {
            hashmap[c]++;
        }
        priority_queue<pair<int,char>> pq;  
        for(auto item : hashmap) {
            pq.push({item.second, item.first});  
        }
        string st="";
        while(pq.size()>1)
        {
            pair<int,char> fir,sec;
            fir=pq.top();
            pq.pop();
            sec=pq.top();
            pq.pop();
            st=st+fir.second;
            fir.first--;
            st=st+sec.second;
            sec.first--;
            if(fir.first>0)
            pq.push(fir);
            if(sec.first>0)
            pq.push(sec);
        }
        if(pq.size()==1)
        {
        if(pq.top().first>1)
        return "-1";
        else
        {
            st=st+pq.top().second;
        }
        }
        return st;
    }
};
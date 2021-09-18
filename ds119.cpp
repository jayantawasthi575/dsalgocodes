class Solution {
public:
    bool checkCycle(int node,vector<int> adj[],int vis[],int dfsVis[])
    {
        vis[node]=1;
        dfsVis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(checkCycle(it,adj,vis,dfsVis))
                    return true;
            }
            else if(dfsVis[it])
            {
                return true;
            }
        }
        dfsVis[node]=0;
        return false;
    }
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
        vector<int> adj[N];
        for(auto i:prerequisites)
            adj[i.second].push_back(i.first);
        int vis[N],dfsVis[N];
        memset(vis,0,sizeof vis);
        memset(dfsVis,0,sizeof dfsVis);
        for(int i=0;i<N;i++)
        {
            if(!vis[i])
            {
                if(checkCycle(i,adj,vis,dfsVis))
                    return false;
            }
        }
        return true;
	}
};
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void df(int node,vector<int>& vis,vector<int> adj[],vector<int> &dfs)
    {
        dfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                df(it,vis,adj,dfs);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> dfs;
        vector<int> vis(V+1,0);
        df(0,vis,adj,dfs);
        return dfs;
    }
};
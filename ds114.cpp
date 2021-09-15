class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int node, stack<int> &st, vector<int> &vis, vector<int> adj[]) {
    vis[node] = 1; 
    for(auto it: adj[node]) {
        if(!vis[it]) {
            dfs(it, st, vis, adj); 
        }
    }
    
    st.push(node); 
    }
    void revDfs(int node, vector<int> &vis, vector<int> transpose[]) {
    //cout << node << " "; 
    vis[node] = 1; 
    for(auto it: transpose[node]) {
        if(!vis[it]) {
            revDfs(it, vis, transpose); 
        }
    }
    }
    int kosaraju(int V, vector<int> adj[])
    {
     vector<int> transpose[V];
     vector<int> vis(V,0);
     stack<int> st;
     for(int i=0;i<V;i++)
     {
         if(!vis[i])
         {
             dfs(i,st,vis,adj);
         }
     }
     //vector<int> transpose[V];
     for(int i=0;i<V;i++)
     {
         vis[i]=0;
         for(auto it:adj[i])
         {
             transpose[it].push_back(i);
         }
     }
     int k=0;
     while(!st.empty())
     {
         int node=st.top();
         st.pop();
         if(!vis[node])
         {
             k++;
             revDfs(node,vis,transpose);
         }
     }
     return k;
    }
};
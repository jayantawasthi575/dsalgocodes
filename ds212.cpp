class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int parent[V];
        int key[V];
        int mstSet[V];
        for(int i=0;i<V;i++)
        {
            key[i]=INT_MAX;
            mstSet[i]=false;
            parent[i]=-1;
        }
        key[0]=0;
        parent[0]=-1;
        for(int count=0;count<V-1;count++)
        {
            int mini=INT_MAX,u;
            for(int v=0;v<V;v++)
            {
                if(mstSet[v]==false && key[v]<mini)
                {
                    mini=key[v];
                    u=v;
                }
            }
            mstSet[u]=true;
            for(auto it:adj[u])
            {
                int v=it[0];
                int weight=it[1];
                if(mstSet[v]==false && weight<key[v])
                {
                    parent[v]=u;
                    key[v]=weight;
                }
            }
        }
        int sum=0;
        for(int i=1;i<V;i++)
        sum=sum+key[i];
        return sum;
    }
};
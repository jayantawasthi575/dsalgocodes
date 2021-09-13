class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int> distTo(V,INT_MAX);
        distTo[S]=0;
        pq.push(make_pair(0,S));
        while(!pq.empty())
        {
            int dist=pq.top().first;
            int prev=pq.top().second;
            pq.pop();
            vector<pair<int,int>>:: iterator it;
            for(auto it:adj[prev])
            {
                int next=it[0];
                int nextDist=it[1];
                if(distTo[next]>dist+nextDist)
                {
                    distTo[next]=distTo[prev]+nextDist;
                    pq.push(make_pair(distTo[next],next));
                }
            }
        }
        return distTo;
    }
};
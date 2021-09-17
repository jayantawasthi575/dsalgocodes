class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> check;
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            {
                check.push({i,j});
                grid[i][j]=0;
                break;
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!check.empty())
        {
            int x=check.front().first;
            int y=check.front().second;
            check.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i],ny=y+dy[i];
                if(nx<0 || ny<0 || nx>=m || ny>=n || grid[nx][ny]==0)
                 continue;
                //  cout<<nx<<" "<<ny<<endl;
                //  cout<<grid[nx][ny]<<endl;
                if(grid[nx][ny]==2)
                 return true;
                 check.push({nx,ny});
                 grid[nx][ny]=0;
            }
        }
        return false;
    }
};
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void mark_current_islands(vector<vector<int>> &matrix,int x,int y,int r,int c,int& fl)
    {
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!=1)
            return;
        matrix[x][y]='2';
        fl++;
        mark_current_islands(matrix,x+1,y,r,c,fl);
        mark_current_islands(matrix,x,y+1,r,c,fl);
        mark_current_islands(matrix,x-1,y,r,c,fl);
        mark_current_islands(matrix,x,y-1,r,c,fl);
        mark_current_islands(matrix,x+1,y+1,r,c,fl);
        mark_current_islands(matrix,x+1,y-1,r,c,fl);
        mark_current_islands(matrix,x-1,y+1,r,c,fl);
        mark_current_islands(matrix,x-1,y-1,r,c,fl);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int rows=grid.size();
        if(rows==0)
            return 0;
        int cols=grid[0].size();
        int no=0;
        int si=0;
        int fl=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==1)
                {
                    mark_current_islands(grid,i,j,rows,cols,fl);
                    if(fl>si)
                        si=fl;
                    fl=0;
                }
            }
        }
        return si;
    }
};
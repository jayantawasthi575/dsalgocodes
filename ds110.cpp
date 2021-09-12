class Solution {
  public:
    // Function to find the number of islands.
    void mark_current_islands(vector<vector<char>> &matrix,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')
            return;
        matrix[x][y]='2';
        mark_current_islands(matrix,x+1,y,r,c);
        mark_current_islands(matrix,x,y+1,r,c);
        mark_current_islands(matrix,x-1,y,r,c);
        mark_current_islands(matrix,x,y-1,r,c);
        mark_current_islands(matrix,x+1,y+1,r,c);
        mark_current_islands(matrix,x+1,y-1,r,c);
        mark_current_islands(matrix,x-1,y+1,r,c);
        mark_current_islands(matrix,x-1,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        if(rows==0)
            return 0;
        int cols=grid[0].size();
        int no_of_islands=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    mark_current_islands(grid,i,j,rows,cols);
                    no_of_islands+=1;
                }
            }
        }
        return no_of_islands;
    }
};
class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>>& image,int newcolor,int n,int m,int oldcolor)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        if(vis[i][j] || image[i][j]!=oldcolor)
            return;
        vis[i][j]=1;
        image[i][j]=newcolor;
        dfs(i+1,j,vis,image,newcolor,n,m,oldcolor);
        dfs(i-1,j,vis,image,newcolor,n,m,oldcolor);
        dfs(i,j+1,vis,image,newcolor,n,m,oldcolor);
        dfs(i,j-1,vis,image,newcolor,n,m,oldcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       int x=image.size();
       int y=image[0].size();
       vector<vector<int>> vis(x,vector<int>(y,0));
       int oldcolor=image[sr][sc];
       dfs(sr,sc,vis,image,newColor,x,y,oldcolor);
       return image;
    }
};
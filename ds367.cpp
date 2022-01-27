class Solution {
public:
    void change(vector<vector<int>>& image,int sr,int sc,vector<vector<int>>&vis,int newColor,int m,int n,int oldColor)
    {
    if(sr<0||sc<0||sr>=m||sc>=n)
        return;
    if(vis[sr][sc]==1||image[sr][sc]!=oldColor)
        return;
    vis[sr][sc]=1;
    image[sr][sc]=newColor;
    change(image,sr+1,sc,vis,newColor,m,n,oldColor);
    change(image,sr,sc+1,vis,newColor,m,n,oldColor);
    change(image,sr-1,sc,vis,newColor,m,n,oldColor);
    change(image,sr,sc-1,vis,newColor,m,n,oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int oldColor=image[sr][sc];
        change(image,sr,sc,vis,newColor,m,n,oldColor);
        return image;
    }
};
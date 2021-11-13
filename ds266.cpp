class Solution {
	public:
	   // int t[1002][1002];
	   // int lc(int x,int y,string& str1,string& str2)
	   // {
	   //     if(x==0||y==0)
	   //     return 0;
	   //     if(t[x][y]!=-1)
	   //     return t[x][y];
	   //     if(str1[x-1]==str2[y-1] && x!=y)
	   //     return t[x][y]=1+lc(x-1,y-1,str1,str2);
	   //     else
	   //     return t[x][y]=max(lc(x,y-1,str1,str2),lc(x-1,y,str1,str2));
	   // }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		  //  int n=str.size();
		  //  int t[n+1][n+1];
		  //  for(int i=0;i<n+1;i++)
		  //  for(int j=0;j<n+1;j++)
		  //  {
		  //      if(i==0||j==0)
		  //      t[i][j]=0;
		  //      else if(str[i-1]==str[j-1] && i!=j)
		  //      {
		  //          t[i][j]=1+t[i-1][j-1];
		  //      }
		  //      else
		  //      {
		  //          t[i][j]=max(t[i-1][j],t[i][j-1]);
		  //      }
		  //  }
		  //  return t[n][n];
		  int n=str.size();
		  int tt[n+1][n+1];
		  memset(tt,-1,sizeof(tt));
		  for(int i=0;i<n+1;i++)
		  for(int j=0;j<n+1;j++)
		  {
		      if(i==0||j==0)
		      tt[i][j]=0;
		      else if(str[i-1]==str[j-1]&&i!=j)
		      tt[i][j]=1+tt[i-1][j-1];
		      else
		      tt[i][j]=max(tt[i-1][j],tt[i][j-1]);
		  }
		  return tt[n][n];
		  //int n=str.size();
		  //memset(t,-1,sizeof(t));
		  //return lc(n,n,str,str);
		}
};
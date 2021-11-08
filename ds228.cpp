class Solution{
	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int x=str1.size();
	    int y=str2.size();
	    int t[x+1][y+1];
	    for(int i=0;i<x+1;i++)
	    for(int j=0;j<y+1;j++)
	    {
	        if(i==0||j==0)
	            t[i][j]=0;
	        else if(str1[i-1]==str2[j-1])
	        {
	            t[i][j]=1+t[i-1][j-1];
	        }
	        else
	        {
	            t[i][j]=max(t[i-1][j],t[i][j-1]);
	        }
	    }
	    return x-t[x][y]+y-t[x][y];
	} 
};
class Solution{
public:
	int countSubstr (string S)
	{   
	    int c=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='1')
	        {
	            c++;
	        }
	    }
	    return c*(c-1)/2;
	}
};
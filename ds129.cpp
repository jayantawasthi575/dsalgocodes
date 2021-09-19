class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string k="";
	    k=k+S[0];
	    for(int i=1;i<S.length();i++)
	    {
	        if(isspace(S[i]))
	        {
	           k=k+S[i+1];
	        }
	    }
	    return k;
	}
};
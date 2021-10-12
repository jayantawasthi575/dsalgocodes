class Solution{
public:	
	string removeDups(string S) 
	{
	    // Your code goes here
	    string w="";
	    unordered_set<char> k;
	    for(int i=0;i<S.length();i++)
	    {
	        if(k.find(S[i])==k.end())
	        {
	            k.insert(S[i]);
	            w=w+S[i];
	        }
	    }
	    return w;
	}
};
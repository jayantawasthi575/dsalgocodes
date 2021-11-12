class Solution{
public:	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string m=S;
	    reverse(m.begin(),m.end());
	    if(m==S)
	    return true;
	    else 
	    return false;
	}
};
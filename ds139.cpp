class Solution{
public:	

	int countSubstringWithEqualEnds(string s)
	{
	    // Your code goes here
	    int arr[26]={0};
	    for(int i=0;i<s.length();i++)
	    arr[s[i]-'a']++;
	    int count=0;
	    for(int i=0;i<26;i++)
	    {
	        count=count+(arr[i]*(arr[i]+1))/2;
	    }
	    return count;
	}
};
class Solution{
public:
    string dtob(int n)
    {
	    if(n==0)
	        return "0";
        int binaryNum[32];
	    int i=0;
	    while(n>0)
	    {
	        binaryNum[i]=n%2;
	        n=n/2;
	        i++;
	    }
	    string s="";
	    for(int j=i-1;j>=0;j--)
	    {
	        s=s+to_string(binaryNum[j]);
	    }
	    return s;
    }
	char kthCharacter(int m, int n, int k)
	{   
	    string temp1=dtob(m);
	    //cout<<temp1<<endl;
	    string temp2="";
	    while(n--)
	    {
	        for(auto x:temp1)
	        {
	            if(x=='0')
	            {
	                temp2+="01";
	            }
	            else
	            {
	                temp2+="10";
	            }
	        }
	    temp1=temp2;
	    temp2="";
	    }
	    return temp1[k-1];
	}
};
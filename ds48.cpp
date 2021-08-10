class Solution{
public:	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    vector<int> send;
	    int i=a.size()-1;
	    int j=b.size()-1;
	    int sum=0,carry=0;
	    while(i>=0 && j>=0)
	    {
	        sum=a[i]+b[j]+carry;
	        send.push_back(sum%10);
	        carry=sum/10;
	        i--;
	        j--;
	    }
	    while(i>=0)
	    {
	        sum=a[i]+carry;
	        send.push_back(sum%10);
	        carry=sum/10;
	        i--;
	    }
	    while(j>=0)
	    {
	        sum=b[j]+carry;
	        send.push_back(sum%10);
	        carry=sum/10;
	        j--;
	    }
	    if(carry)
	    send.push_back(carry);
	    reverse(send.begin(),send.end());
	    return send;
	}
};
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int> q1;
	    for(int i=0;i<n;i++)
	    q1.push(arr[i]);
	    vector<int> k1;
	    for(int i=0;i<k;i++)
	    {
	        k1.push_back(q1.top());
	        q1.pop();
	    }
	    return k1;
	}
};
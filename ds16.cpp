class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    vector<int> odd;
	    vector<int> even;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0)
	        even.push_back(arr[i]);
	        else
	        odd.push_back(arr[i]);
	    }
	    sort(even.begin(),even.end());
	    sort(odd.begin(),odd.end());
	    for(int i=0;i<even.size();i++)
	    arr[i]=even[i];
	    for(int j=0;j<odd.size();j++)
	    arr[even.size()+j]=odd[j];
	}
};
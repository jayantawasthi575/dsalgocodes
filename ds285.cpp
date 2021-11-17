vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    reverse(arr,arr+n);
    stack<pair<int,int>> st;
    st.push({arr[0],0});
    vector<int>ans(n);
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && st.top().first>arr[i])
        {
            ans[st.top().second]=arr[i];
            st.pop();
        }
        st.push({arr[i],i});
    }
    while(!st.empty())
    {
     ans[st.top().second]=-1;
     st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
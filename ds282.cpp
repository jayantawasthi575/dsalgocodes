class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>arr1(n,-1);
        stack<long long>st;
        int i=0;
        st.push(i);
        i++;
        while(!st.empty()&&i<n)
        {
            if(arr[st.top()]>arr[i])
            {
                st.push(i);
                i++;
            }
            else
            {
             while(!st.empty())
             {
                 if(arr[i]>arr[st.top()])
                 {
                     arr1[st.top()]=arr[i];
                     st.pop();
                 }
                 else
                 {
                     break;
                 }
             }
             st.push(i);
             i++;
            }
        }
        return arr1;
    }
};
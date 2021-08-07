class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j]){
                if(!ans.size() || ans[ans.size()-1]!=arr1[i])
                    ans.push_back(arr1[i]);
                i++;
            }
            else if(arr2[j]<arr1[i]){
                if(!ans.size() || ans[ans.size()-1]!=arr2[j])
                    ans.push_back(arr2[j]);
                j++;
            }
            else{
                if(!ans.size() || ans[ans.size()-1]!=arr1[i])
                    ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n){
            if(!ans.size() || ans[ans.size()-1]!=arr1[i])
                    ans.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            if(!ans.size() || ans[ans.size()-1]!=arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
};
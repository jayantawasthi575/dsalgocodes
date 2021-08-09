class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_map<int,int> ma;
        for(int i=0;i<n;i++)
        ma[arr[i]]++;
        for(int i=0;i<n;i++)
        {
            if(ma[arr[i]]>1)
            {
                return i+1;
            }
        }
        return -1;
    }
};
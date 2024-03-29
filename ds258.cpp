class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_set<int> s1,s2,s3;
            for(int i=0;i<n1;i++)
            s1.insert(A[i]);
            for(int j=0;j<n2;j++)
            s2.insert(B[j]);
            for(int k=0;k<n3;k++)
            s3.insert(C[k]);
            unordered_map<int,int> v1;
            for(auto it:s1)
            {
                v1[it]++;
            }
            for(auto it:s2)
            {
                v1[it]++;
            }
            for(auto it:s3)
            {
                v1[it]++;
            }
            int i=0;
            vector<int> v2;
            for(auto it:v1)
            {
                if(it.second==3)
                v2.push_back(it.first);
            }
            sort(v2.begin(),v2.end());
            return v2;
        }
};

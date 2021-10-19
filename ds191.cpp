class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    void top(Node* root,int dist,int level, map<int,pair<int,int>>& mp)
    {
        if(root==NULL)
            return;
        else
        {
            if(mp.count(dist)==0 || mp[dist].second>level)
            {
             mp[dist]=make_pair(root->data,level);   
            }
        }
        top(root->left,dist-1,level+1,mp);
        top(root->right,dist+1,level+1,mp);
    }
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> cp;
        map<int,pair<int,int>> mp;
        top(root,0,0,mp);
        for(auto it:mp)
        {
            cp.push_back(it.second.first);
        }
        return cp;
    }
};
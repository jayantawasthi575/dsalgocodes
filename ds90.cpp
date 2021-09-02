class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void countAll(Node* node,vector<int> &cp,int level,int &max_level)
    {
        if(node==NULL)
            return;
        if(max_level<level)
        {
            cp.push_back(node->data);
            max_level=level;
        }
        countAll(node->right,cp,level+1,max_level);
        countAll(node->left,cp,level+1,max_level);
    }
    vector<int> rightView(Node *root)
    {
       vector<int> cp;
       int level=1;
       int max_level=0;
       countAll(root,cp,1,max_level);
       return cp;
    }
};
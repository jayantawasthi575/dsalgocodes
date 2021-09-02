class Solution{
  public:
    // Function should return all the ancestor of the target node
    bool collect(Node* root,int target,vector<int> &ancest)
    {
        if(root==NULL)
            return false;
        if(root->data==target)
        {
            //ancest.push_back(root->data);    
            return true;
        }
        if(collect(root->left,target,ancest) || collect(root->right,target,ancest))
        {
            ancest.push_back(root->data);
            return true;
        }
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
         vector<int> ancest;
         bool get=collect(root,target,ancest);
         return ancest;
    }
};
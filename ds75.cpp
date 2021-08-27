void countAll(Node* node,vector<int> &cp,int level,int& max_level)
{
    if(node==NULL)
        return;
    if(max_level<level)
    {
        cp.push_back(node->data);
        max_level=level;
    }
    countAll(node->left,cp,level+1,max_level);
    countAll(node->right,cp,level+1,max_level);
}
vector<int> leftView(Node *root)
{   
    vector<int> cp;
    int level=1;
    int max_level=0;
    countAll(root,cp,1,max_level);
    return cp;
}
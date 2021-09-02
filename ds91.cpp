int height(Node* node)
{
    if(node==NULL)
        return 0;
    else
    {
        int lheight=height(node->left);
        int rheight=height(node->right);
        if(lheight>rheight)
            return(lheight+1);
        else
            return(rheight+1);
    }
}
void countAllLevel(Node* node,int level,vector<int> &collect)
{
    if(node==NULL)
        return;
    if(level==1)
        collect.push_back(node->data);
    else if(level>1)
    {
        countAllLevel(node->left,level-1,collect);
        countAllLevel(node->right,level-1,collect);
    }
}
vector<int> reverseLevelOrder(Node *root)
{
    int h=height(root);
    int i;
    vector<int> collect;
    for(i=h;i>=1;i--)
    {
        countAllLevel(root,i,collect);
    }
    return collect;
}
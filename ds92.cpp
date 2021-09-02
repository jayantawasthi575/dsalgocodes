void klevel(Node* root,int level,vector<int>& store)
{
    if(root==NULL)
        return;
    if(level==0)
    {
        store.push_back(root->data);
    }
    else if(level>0)
    {
        klevel(root->left,level-1,store);
        klevel(root->right,level-1,store);
    }
}
vector<int> Kdistance(struct Node *root, int k)
{
  vector<int> store;
  klevel(root,k,store);
  return store;
}
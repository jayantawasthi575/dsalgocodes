void collec(Node* node,vector<vector<int>>& collect,vector<int> store)
{
    if(node==NULL)
        return;
    if(node->left==NULL && node->right==NULL)
    {
        store.push_back(node->data);
        collect.push_back(store);
        return;
    }
    store.push_back(node->data);
    collec(node->left,collect,store);
    collec(node->right,collect,store);
}
vector<vector<int>> Paths(Node* root)
{
  vector<vector<int>> collect;
  vector<int> store;
  collec(root,collect,store);
  return collect;
}
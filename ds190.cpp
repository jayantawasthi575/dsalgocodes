void post(Node* root,vector<int>& postor)
{
    if(root==NULL)
        return;
    else
    {
        post(root->left,postor);
        post(root->right,postor);
        postor.push_back(root->data);
    }
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> postor;
  post(root,postor);
  return postor;
}
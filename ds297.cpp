void check(vector<int>& pre,Node* root)
{
   if(root==NULL)
   return;
   pre.push_back(root->data);
   check(pre,root->left);
   check(pre,root->right);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> pre;
  check(pre,root);
  return pre;
}
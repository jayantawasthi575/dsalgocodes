class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inord(Node *root,vector<int>& send)
    {
        if(root==NULL)
            return;
        inord(root->left,send);
        send.push_back(root->data);
        inord(root->right,send);
    }
    vector<int> inOrder(Node* root) {
       vector<int> send; 
       inord(root,send);
       return send;
    }
};
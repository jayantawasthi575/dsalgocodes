class Solution {
  public:
    void mirror(Node* node) {
        if(node==NULL)
            return;
        else
        {
            Node* temp;
            mirror(node->left);
            mirror(node->right);
            temp=node->left;
            node->left=node->right;
            node->right=temp;
        }
    }
};
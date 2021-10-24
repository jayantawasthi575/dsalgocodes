class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
        if(root==NULL)
        return NULL;
        if(root->data==n1 || root->data==n2)
        return root;
        Node* lnode=lca(root->left,n1,n2);
        Node* rnode=lca(root->right,n1,n2);
        if(lnode!=NULL && rnode!=NULL)
        return root;
        else if(lnode!=NULL)
        return lnode;
        else
        return rnode;
    }
};
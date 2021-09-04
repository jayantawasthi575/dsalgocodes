class Solution{
  public:
    /*You are required to complete below method */
    int evalTree(node* root) {
       if(root!=NULL)
       {
           if(root->left==NULL && root->right==NULL)
           return stoi(root->data);
           int a=evalTree(root->left);
           int b=evalTree(root->right);
           if(root->data=="+")
                return a+b;
           if(root->data=="-")
                return a-b;
           if(root->data=="*")
                return a*b;
           else
                return a/b;
       }
    }
};
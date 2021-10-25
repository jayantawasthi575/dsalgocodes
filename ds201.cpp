void search(Node* root,int &f)
{
    if(root->left==NULL)
         {
             f=root->data;
             return;
         }
    root=root->left;
    search(root,f);
}
int minValue(Node* root) {
    // Code here
    if(root->left==NULL)
        return root->data;
     int f=-1;
     search(root,f);
     return f;
}
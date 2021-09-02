class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int countmax=-1;
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
    void countAllLevel(Node* node,int level,int &max)
    {
        if(node==NULL)
            return;
        if(level==1)
            max++;
        else if(level>1)
        {
            countAllLevel(node->left,level-1,max);
            countAllLevel(node->right,level-1,max);
        }
        if(max>countmax)
            countmax=max;
    }
    int getMaxWidth(Node* root) {
        int h=height(root);
        int i;
        int max=0;
        for(i=1;i<=h;i++)
        {
            countAllLevel(root,i,max);
            max=0;
        }
        return countmax;
    }
};
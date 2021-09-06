class Solution{
  public:
    /*You are required to complete below method */
    int height(Node* node) 
    {
      if(node==NULL)
        return 0;
      else 
      {
          int ldepth=height(node->left);
          int rdepth=height(node->right);
          if(ldepth>rdepth)
            return (ldepth+1);
          else
            return (rdepth+1);
      }
    }
    void store(Node* node,int level,int& count)
    {
        if(node==NULL)
            return;
        if(level==0)
        {
            count=count+node->data;
        }
        else if(level>0)
        {
            store(node->left,level-1,count);
            store(node->right,level-1,count);
        }
    }
    int maxLevelSum(Node* root) {
        int h=height(root);
        int maxi=0;
        int maxm=-9999;
        for(int i=0;i<h;i++)
        {
            store(root,i,maxi);
            if(maxi>maxm)
                maxm=maxi;
            maxi=0;
        }
        return maxm;
    }
};
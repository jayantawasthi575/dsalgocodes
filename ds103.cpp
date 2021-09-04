class Solution{
  public:
    /*You are required to complete this function*/
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
    int getLevelDiff(Node *root)
    {
       int h=height(root);
       int odd=0;
       int even=0;
       for(int i=0;i<h;i++)
       {
           if(i%2==0)
           {
               store(root,i,odd);
           }
           else
           {
               store(root,i,even);
           }
       }
       return odd-even;
    }
};

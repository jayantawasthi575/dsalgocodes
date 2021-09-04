class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
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
    void store(Node* node,int level,bool ltr,vector<int>& collect)
    {
        if(node==NULL)
            return;
        if(level==0)
        {
            collect.push_back(node->data);
        }
        else if(level>0)
        {
            if(ltr==true)
            {
                store(node->left,level-1,ltr,collect);
                store(node->right,level-1,ltr,collect);
            }
            else
            {
                store(node->right,level-1,ltr,collect);
                store(node->left,level-1,ltr,collect);
            }
        }
    }
    vector <int> zigZagTraversal(Node* root)
    {
        int h=height(root);
        bool toggle=true;
        vector<int> collect;
        for(int i=0;i<h;i++)
        {
            store(root,i,toggle,collect);
            if(toggle==true)
                toggle=false;
            else
                toggle=true;
        }
        return collect;
    }
};

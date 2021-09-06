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
    void store(Node* node,int level,int a,int b,int& c,int& d,bool& ye,Node* parent,int& flag)
    {   
        if(node==NULL)
            return;
        if(level==0)
        {
          if(node->data==a)
          {
             c=1;
            // cout<<"YES";
          }
          if(node->data==b)
          {
              d=1;
              //cout<<"YES";
          }
          if(c==0 && d==1)
          {
              flag=1;
          }
          if(c==1 && d==1)
          {   
             
              if(flag==1)
               a=b;
              if(parent->left==NULL)
              {
                  ye=true;
              }
              else if(parent->right==NULL)
              {
                  ye=true;
              }
              else if(parent->left->data!=a)
              {
                  ye=true;
              }
          }
        }
        else if(level>0)
        {   
            parent=node;
            store(node->left,level-1,a,b,c,d,ye,parent,flag);
            store(node->right,level-1,a,b,c,d,ye,parent,flag);
        }
    }
bool isCousins(Node *root, int a, int b)
{
       int h=height(root);
       int c=0,d=0;
       bool ye=false;
       Node* parent=root;
       int flag=1;
       for(int i=0;i<h;i++)
       {
           store(root,i,a,b,c,d,ye,parent,flag);
           if(ye==true)
           return true;
           if(c==1 && d==1)
           return false;
           c=0;
           d=0;
           flag=0;
           ye=false;
       }
       return false;
}
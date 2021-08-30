class Spiral
{
    //Function to return a list containing the level order 
    //traversal in spiral form.	
    int height(Node node) 
    {
      if(node==null)
        return 0;
      else 
      {
          int ldepth=height(node.left);
          int rdepth=height(node.right);
          if(ldepth>rdepth)
            return (ldepth+1);
          else
            return (rdepth+1);
      }
    }
    void storelevel(Node node,int level,ArrayList<Integer> store,boolean toggle)
    {
        if(node==null)
            return;
        if(level==0)
            store.add(node.data);
        else if(level>0)
        {   if(toggle==true)
            {
                storelevel(node.left,level-1,store,toggle);
                storelevel(node.right,level-1,store,toggle);
            }
            else
            {
                storelevel(node.right,level-1,store,toggle);
                storelevel(node.left,level-1,store,toggle);
            }
        }
    }
    ArrayList<Integer> findSpiral(Node root) 
    {
        ArrayList<Integer> store=new ArrayList<Integer>();
        int hei=height(root);
        boolean toggle=false;
        for(int i=0;i<hei;i++)
        {
            storelevel(root,i,store,toggle);
            if(toggle==true)
                toggle=false;
            else
                toggle=true;
        }
        return store;
    }
}
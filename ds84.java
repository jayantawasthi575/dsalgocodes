class Level_Order_Traverse
{
    //Function to return the level order traversal line by line of a tree.
    static int height(Node node) 
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
    static void storelevel(Node node,int level,ArrayList<Integer> store)
    {
        if(node==null)
            return;
        if(level==0)
            store.add(node.data);
        else if(level>0)
        {
            storelevel(node.left,level-1,store);
            storelevel(node.right,level-1,store);
        }
    }
    static ArrayList<ArrayList<Integer>> levelOrder(Node node) 
    {
        ArrayList<ArrayList<Integer>> fstore=new ArrayList<ArrayList<Integer>>();
        int hei=height(node);
        for(int i=0;i<hei;i++)
        {   
            ArrayList<Integer> store=new ArrayList<Integer>();
            storelevel(node,i,store);
            fstore.add(store);
        }
        return fstore;
    }
}
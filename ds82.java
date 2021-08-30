class Solution
{
    //Function to return the level order traversal of a tree.
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
    static ArrayList <Integer> levelOrder(Node node) 
    {
        ArrayList<Integer> store=new ArrayList<Integer>();
        int hei=height(node);
        for(int i=0;i<hei;i++)
        {
            storelevel(node,i,store);
        }
        return store;
    }
}
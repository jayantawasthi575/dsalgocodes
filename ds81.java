class Tree
{
    
    //Function to check whether a binary tree is balanced or not.
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
    boolean isBalanced(Node root)
    {   if(root==null)
            return true;
	    int lheight=height(root.left);
	    int rheight=height(root.right);
	    if(Math.abs(rheight-lheight)<=1 && isBalanced(root.left) && isBalanced(root.right))
	        return true;
	    else
	        return false;
    }
}
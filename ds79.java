class Solution {
    //Function to find the height of a binary tree.
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
}
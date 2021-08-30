class Solution {
    // Function to return the diameter of a Binary Tree.
    int hia(Node node,int dia[])
    {
        if(node==null)
            return 0;
        int lh=hia(node.left,dia);
        int rh=hia(node.right,dia);
        dia[0]=Math.max(dia[0],lh+rh+1);
        return 1+Math.max(lh,rh);
    }
    int diameter(Node root) {
        int dia[]={ 0 };
        int unused=hia(root,dia);
        return dia[0];
    }
}
class Solution {
    /*you are required to complete this function */
    boolean check(Node root,int s,int sum)
    {
        if(root==null)
            return false;
        sum=sum+root.data;
        if(root.left==null && root.right==null)
        {
            if(sum==s)
                return true;
            else 
                return false;
        }
        boolean check1=check(root.left,s,sum);
        boolean check2=check(root.right,s,sum);
        return check1 || check2;
    }
    boolean hasPathSum(Node root, int S) {
        return check(root,S,0);
    }
}
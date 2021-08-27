class Solution
{
    public:
    //Function to check if two trees are identical.
    bool check(Node* r1,Node* r2)
    {
        if(r1==NULL && r2==NULL)
            return 1;
        if(r1!=NULL && r2!=NULL)
        {
            return(
            r1->data==r2->data && check(r1->left,r2->left) && check(r1->right,r2->right)
            );
        }
        return 0;
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        return check(r1,r2);
    }
};
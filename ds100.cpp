class Solution
{
    public:
    int areMirror(Node* a, Node* b) {
        if(a==NULL && b==NULL)
            return true;
        if(a && b && a->data==b->data)
        {
            return areMirror(a->left,b->right)&&areMirror(a->right,b->left);
        }
        return false;
    }

};
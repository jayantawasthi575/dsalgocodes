class Solution{
    public:
    int preIndex=0;
    int search(int in[],int strt,int end,int data)
    {
        int i;
        for(i=strt;i<=end;i++)
        {
            if(in[i]==data)
            return i;
        }
    }
    Node* construct(int strt,int end,int in[],int pre[])
    {
        if(strt>end)
            return NULL;
        Node* node=new Node(pre[preIndex++]);
        if(strt==end)
            return node;
        int index=search(in,strt,end,node->data);
        node->left=construct(strt,index-1,in,pre);
        node->right=construct(index+1,end,in,pre);
        return node;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return construct(0,n-1,in,pre);
    }
};
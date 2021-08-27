void sibl(Node* node,vector<int> &send)
{
    if(node->left==NULL && node->right==NULL)
        return;
    if(node->left!=NULL && node->right!=NULL)
    {
        sibl(node->left,send);
        sibl(node->right,send);
    }
    else if(node->right!=NULL)
    {
        send.push_back(node->right->data);
        sibl(node->right,send);
    }
    else if(node->left!=NULL)
    {
        send.push_back(node->left->data);
        sibl(node->left,send);
    }
}
vector<int> noSibling(Node* node)
{
    vector<int> send;
    sibl(node,send);
    if(send.size()==0)
    send.push_back(-1);
    sort(send.begin(),send.end());
    return send;
}
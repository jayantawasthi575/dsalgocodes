void preord(Node* node,vector<int> &send)
{
    if(node==NULL)
        return;
    send.push_back(node->data);
    preord(node->left,send);
    preord(node->right,send);
}
vector <int> preorder(Node* root)
{
    vector<int> send;
    preord(root,send);
    return send;
}
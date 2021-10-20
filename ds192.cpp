vector<int> diagonal(Node *root)
{
    vector<int>v;
    if(root==nullptr)
    return v;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front(); q.pop();
        
        while(f){
        v.push_back(f->data);
        
        if(f->left) q.push(f->left);
        
        f = f->right;
        }
    }
    return v;
}
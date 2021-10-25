unordered_map<string,int> coun;
vector<Node*> ans;
string solve(Node* root)
{
    if(!root)
    return "";
    string str="(";
    str=str+solve(root->left);
    str=str+to_string(root->data);
    str=str+solve(root->right);
    str=str+")";
    coun[str]++;
    if(coun[str]==2)
    {
        ans.push_back(root);
    }
    return str;
}
vector<Node*> printAllDups(Node* root)
{
    // Code here
    coun.clear();
    ans.clear();
    solve(root);
    return ans;
}
class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    unordered_map<string,int> str;
    string find(Node* root)
    {
         if(root==NULL)
            return "$";
         string s="";
         if(root->right==NULL&&root->left==NULL)
         {
             s=to_string(root->data);
             return s;
         }
         s=s+to_string(root->data);
         s=s+find(root->left);
         s=s+find(root->right);
         str[s]++;
         return s;   
    }
    int dupSub(Node *root) {
         // code here
         str.clear();
         find(root);
         for(auto x:str)
         {
             if(x.second>=2)
                return true;
         }
         return false;
    }
};
class Solution {
public:
    map<int,vector<pair<int,int>>> hash;
    vector<vector<int>> output;
    void fill_tree(TreeNode* root,int pos,int depth)
    {
        if(root==NULL)
            return;
        hash[pos].push_back(make_pair(depth,root->val));
        fill_tree(root->left,pos-1,depth+1);
        fill_tree(root->right,pos+1,depth+1);        
    }
    void traverse(TreeNode* root)
    {
        fill_tree(root,0,0);
        for(auto it:hash)
        {
            sort(it.second.begin(),it.second.end());
            vector<int> temp;
            for(auto i:it.second)temp.push_back(i.second);
            output.push_back(temp);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        traverse(root);
        return output;        
    }
};

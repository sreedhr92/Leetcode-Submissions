/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right
     (right) {}
 * };
 */
class Solution {
public:
    map<int,int> hash;
    vector<int> output;
    void dfs(TreeNode* root,int depth,int dir)
    {
        if(root==NULL)
            return;
        hash[depth] = root->val;
        dfs(root->left,depth+1,dir-1);
        dfs(root->right,depth+1,dir+1);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0,0);
        for(auto it:hash)
            output.push_back(it.second);
        return output;
        
    }
};

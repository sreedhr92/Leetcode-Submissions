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
    void dfs(TreeNode* root,int depth,vector<int> &output)
    {
        if(root==NULL)
            return;
        if(output.size()<=depth)
            output.push_back(root->val);
        else
            output[depth] = root->val;
        dfs(root->left,depth+1,output);
        dfs(root->right,depth+1,output);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> output;
        dfs(root,0,output);
        return output;
    }
};

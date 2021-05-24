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
    vector<vector<int>> output;
    void traverse(TreeNode* root,int depth)
    {
        if(root==NULL)
            return;
        if(depth>=output.size())
            output.push_back({root->val});
        else
            output[depth].push_back(root->val);
        traverse(root->left,depth+1);
        traverse(root->right,depth+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        traverse(root,0);
        return output;
        
    }
};

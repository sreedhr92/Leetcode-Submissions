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
    int min_dep=INT_MAX;
    void helper(TreeNode *root,int depth)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            min_dep = min(min_dep,depth);
        helper(root->left,depth+1);
        helper(root->right,depth+1);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        helper(root,1);
        return min_dep;
        
    }
};

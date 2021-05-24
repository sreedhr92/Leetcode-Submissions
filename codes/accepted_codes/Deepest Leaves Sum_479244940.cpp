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
    int max_depth=-1;
    int output=0;
    void depth_max(TreeNode* root,int depth)
    {
        if(root==NULL)
            return;
        if(depth==max_depth)
            output+=root->val;
        else if(depth>max_depth)
        {
            max_depth=depth;
            output=root->val;
        }
        depth_max(root->left,depth+1);
        depth_max(root->right,depth+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        depth_max(root,0);
        return output;
        
    }
};

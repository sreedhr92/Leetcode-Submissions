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
    void depth_max(TreeNode* root,int depth,int &max_depth,int &output)
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
        depth_max(root->left,depth+1,max_depth,output);
        depth_max(root->right,depth+1,max_depth,output);
    }
    int deepestLeavesSum(TreeNode* root) {
        int output=0;
        int max_depth=-1;
        depth_max(root,0,max_depth,output);
        return output;
    }
};

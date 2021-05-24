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
    bool output=false;
    int sum=0;
    void inorder(TreeNode* root,int &targetSum)
    {
        if(root==NULL)
            return;
        sum+=root->val;
        if(root->val==13)
            cout<<sum;
        if(root->left==NULL && root->right==NULL)
        {
            if(targetSum==sum)
            {
                output=true;
                return;
            }
        }
        inorder(root->left,targetSum);
        inorder(root->right,targetSum);
        sum-=root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        inorder(root,targetSum);
        return output;
        
    }
};

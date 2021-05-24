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
    TreeNode* trim(TreeNode* root,int &low,int &high)
    {
        if(root==NULL)
            return NULL;
        if(root->val<low)
        {
            root = root->right;
            return trim(root,low,high);
        }
        else if(root->val>high)
        {
            root = root->left;
            return trim(root,low,high);
        }
        if(root->left)
            root->left = trim(root->left,low,high);
        if(root->right)
            root ->right = trim(root->right,low,high);
        return root;
            
        
                
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return trim(root,low,high);
        
    }
};

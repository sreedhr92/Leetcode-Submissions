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
    vector<int> array;
    
    void inorder(TreeNode *root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        array.push_back(root->val);
        inorder(root->right);
    }
    bool check_array()
    {
        for(int i=1;i<array.size();++i)
        {
            if(array[i]<=array[i-1])
                return false;
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return check_array();
        
        
    }
};

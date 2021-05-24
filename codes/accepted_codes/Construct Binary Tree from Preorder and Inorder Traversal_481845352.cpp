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
    unordered_map<int,int> hash;
    int i=-1;
    TreeNode* build(int left,int right,vector<int>& preorder)
    {
        if(left<=right)
        {
            if(left==right)
                return new TreeNode(preorder[++i]);
            TreeNode *root = new TreeNode(preorder[++i]);
            int mid = hash[preorder[i]];
            root->left = build(left,mid-1,preorder);
            root->right= build(mid+1,right,preorder);
            return root;
        }
        return NULL;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
            hash[inorder[i]]=i;
        return build(0,preorder.size()-1,preorder);
        
        
    }
};

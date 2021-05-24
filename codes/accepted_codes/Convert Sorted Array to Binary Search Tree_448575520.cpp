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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return NULL;
        return create_tree(nums,0,n);
    } 
        TreeNode* create_tree(vector<int>& nums,int l ,int r)
        {
            if(l>=r)
                return NULL;
            int m = l + (r-l)/2;
            TreeNode *node = new TreeNode(nums[m]);
            node->left = create_tree(nums,l,m);
            node->right = create_tree(nums,m+1,r);
            return node;
        }
        
};

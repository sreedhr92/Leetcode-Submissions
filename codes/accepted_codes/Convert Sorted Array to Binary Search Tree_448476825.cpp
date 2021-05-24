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
    TreeNode* sortedArrayToBST(vector<int>& nums, int start_idx, int end_idx) {
        if (start_idx >= end_idx) {return nullptr;}
        int middle = start_idx + (end_idx - start_idx) / 2;
        TreeNode* root  = new TreeNode(nums[middle]);
        root->left = sortedArrayToBST(nums, start_idx, middle);
        root->right = sortedArrayToBST(nums, middle + 1, end_idx);
        return root;
    }
    
   TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) {return nullptr;}
        return sortedArrayToBST(nums, 0, nums.size());
    }
};

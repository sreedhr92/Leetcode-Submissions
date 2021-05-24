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
    void flip(TreeNode* root) {
        TreeNode* temp;

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }

    int preorder(TreeNode* root, vector<int>& voyage, int i, vector<int>& 
        flipped_nodes) {
        int lcount, rcount;

        if (root == nullptr) {
            return 0;
        }

        if (root->val != voyage[i]) {
            // Give the caller a signal that it's impossible.
            return -1;
        }

        if (root->left && root->right
        && root->left->val != voyage[i + 1]
        && root->right->val == voyage[i + 1]) {
            flipped_nodes.push_back(root->val);
            flip(root);
        }

        lcount = preorder(root->left, voyage, i + 1, flipped_nodes);
        if (lcount == -1) {
            return -1;
        }

        rcount = preorder(root->right, voyage, i + 1 + lcount, flipped_nodes);
        if (rcount == -1) {
            return -1;
        }

        // Return the count of this subtree (+ 1: me).
        return lcount + rcount + 1;
    }

public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        vector<int> flipped_nodes;
        
        if (preorder(root, voyage, 0, flipped_nodes) == -1) {
            // -1 is a signal indicating that it's impossible.
            return { -1 };
        }

        return flipped_nodes;
    }
};

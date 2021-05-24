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
    int i=0;
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& v) {
        vector<int>res;
        if(flipTree(root,v,res))
            return res;
        return {-1};
    }
    bool flipTree(TreeNode* root,vector<int>&v,vector<int>&res){
        if(root == NULL) return true;
        if(root->val != v[i++]) return false;
        if(root->left != NULL && root->left->val != v[i]){    
            res.push_back(root->val);
            swap(root->left,root->right);
        }
        return flipTree(root->left,v,res) && flipTree(root->right,v,res);
    }
};

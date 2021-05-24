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
    pair<int,TreeNode *> dfs(TreeNode* root){
        if(root==NULL){
            return {0,NULL};
        }
        auto A1 = dfs(root->left);
        auto A2 = dfs(root->right);
        if(A1.first==A2.first) return {A1.first+1,root};
        if(A1.first>A2.first){
            return {A1.first+1,A1.second};
        }else{
            return {A2.first+1,A2.second};
        }
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        auto ans = dfs(root);
        return ans.second;    
    }
};

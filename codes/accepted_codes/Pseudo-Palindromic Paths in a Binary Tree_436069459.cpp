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
    int output=0;
    void check_hash()
    {
        int count =0;
        for(auto i:hash)
        {
            if(i.second%2!=0)
                count++;
        }
        if(count<=1)
            output++;
    }
    void dfs(TreeNode* root)
    {
        if(root==NULL)
            return;
        hash[root->val]++;
        dfs(root->left);
        dfs(root->right);
        if(root->left==NULL && root->right==NULL)
            check_hash();
        hash[root->val]--;
        return;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        
        return output;
    }
};

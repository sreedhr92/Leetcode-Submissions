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
    vector<vector<int>> output;
    unordered_map<int,int> visited;
    void preorder(TreeNode* root,int depth)
    {
        if(root==NULL)
            return;
        vector<int> a;
        if(!visited[depth])
        {
            visited[depth]++;
            output.push_back(a);
        }
        output[depth].push_back(root->val);
        preorder(root->left,depth+1);
        preorder(root->right,depth+1);
        return;
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        preorder(root,0);
        return output;
        
        
    }
};

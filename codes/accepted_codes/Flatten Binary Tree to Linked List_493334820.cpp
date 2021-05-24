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
    vector<int> tree;
    void preorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        tree.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        preorder(root);
        int i=0;
        TreeNode *temp;
        while(root && i<tree.size())
        {
            root->val = tree[i];
            i++;
            root->left = NULL;
            root = root->right;
            if(root)
                temp=root;
        }
        while(i<tree.size())
        {
            temp->right = new TreeNode(tree[i]);
            i++;
            temp = temp->right;
        }  
    }
};

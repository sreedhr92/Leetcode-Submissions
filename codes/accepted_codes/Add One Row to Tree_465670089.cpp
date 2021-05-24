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
    void add(TreeNode* root, int &v, int &d,int depth)
    {
        if(root==NULL)
            return;
        if(depth==d)
        {
            TreeNode* nl = new TreeNode(v);
            TreeNode* nr = new TreeNode(v);
            nl->left = root->left;;
            nr->right = root->right;
            root->left=nl;
            root->right=nr;
            return;
        }
        add(root->left,v,d,depth+1);
        add(root->right,v,d,depth+1);
        
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1)
        {
            TreeNode* l = root;
            TreeNode* nl = new TreeNode(v);
            nl->left=l;
            return nl;
        }
        add(root,v,d,2);
        return root;
        
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int r;
    unordered_map<int,int> hash;
    TreeNode *build(vector<int>& postorder,int left,int right)
    {
        if(left<=right)
        {
            TreeNode *node = new TreeNode(postorder[--r]);
            int mid = hash[postorder[r]];
            node->right = build(postorder,mid+1,right);
            node->left = build(postorder,left,mid-1) ;
            return node;
        }
        return NULL;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        r = postorder.size();
        for(int i=0;i<inorder.size();i++)
            hash[inorder[i]]=i;
        return build(postorder,0,postorder.size()-1);

    }
};
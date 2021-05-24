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
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        TreeNode *temp = root->right,*head;
        if(root->left)
        {
            root->right=root->left;
            root->left=NULL;
            head = root->right;
            while(head->right!=NULL)
                head=head->right;
            head->right = temp;
        }
        flatten(root->right);
    }
};

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
    vector<int> n1,n2;
    void inorder(TreeNode *root,int tree)
    {
        if(root==NULL)
            return;
        inorder(root->left,tree);
        if(!tree)
            n1.push_back(root->val);
        else
            n2.push_back(root->val);
        inorder(root->right,tree);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1,0);
        inorder(root2,1);
        int i=0,j=0;
        vector<int> output;
        while(i<n1.size() and j<n2.size())
        {
            if(n1[i]<n2[j])
                output.push_back(n1[i++]);
            else
                output.push_back(n2[j++]);
        }
        while(i<n1.size())
            output.push_back(n1[i++]);
        while(j<n2.size())
            output.push_back(n2[j++]);
        return output;
        
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* find_node(TreeNode* cloned,int target)
    {
        if(cloned==NULL)
            return NULL;
        if(target==cloned->val)
            return cloned;
        TreeNode* temp1  = find_node(cloned->left,target);
        if(temp1!=NULL)
            return temp1;
        TreeNode* temp2  = find_node(cloned->right,target);
        if(temp2!=NULL)
            return temp2;
        return NULL;
        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val = target->val;
        return find_node(cloned,val);
        
    }
};

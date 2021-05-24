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
    void level_order(TreeNode *root,vector<long> &level_sum,vector<int> &length,int 
        depth)
    {
        if(root==NULL)
            return;
        if(depth>=level_sum.size())
        {
            level_sum.push_back(root->val);
            length.push_back(1);
        }
        else
        {
            level_sum[depth]+=root->val;
            length[depth]++;
        }
        level_order(root->left,level_sum,length,depth+1);
        level_order(root->right,level_sum,length,depth+1);
    }
        
    vector<double> averageOfLevels(TreeNode* root) {
        vector<long> level_sum;
        vector<int> length;
        level_order(root,level_sum,length,0);
        vector<double> output;
        for(int i=0;i<length.size();i++)
        {
            output.push_back(level_sum[i]/(double)length[i]);
        }
        return output;
        
        
    }
};

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
    vector<int> l1,l2;
    void traverse1(TreeNode* root)
    {
        if(root!=NULL)
        {
            traverse1(root->left);
            l1.push_back(root->val);
            traverse1(root->right);
        }
    }
    void traverse2(TreeNode* root)
    {
        if(root!=NULL)
        {
            traverse2(root->left);
            l2.push_back(root->val);
            traverse2(root->right);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        traverse1(root1);
        traverse2(root2);
        int i=0,j=0;
        cout<<i<<"  "<<l1.size()<<endl;
        cout<<j<<"  "<<l2.size()<<endl;
        vector<int> res;
        while(i < l1.size() and j < l2.size() )
        {
            cout<<"debug";
            if(l1[i]<l2[j])
                res.push_back(l1[i++]);
            else
                res.push_back(l2[j++]);
        }
        while(i<l1.size())
            res.push_back(l1[i++]);
        while(j<l2.size())
            res.push_back(l2[j++]);
        return res;
    }
};

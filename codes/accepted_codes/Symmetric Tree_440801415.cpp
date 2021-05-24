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
    vector<pair<int,int>> arr;
    void inorder(TreeNode* root,int val)
    {
        if(root==NULL)
            return;
        inorder(root->left,0);
        arr.push_back(make_pair(root->val,val));
        inorder(root->right,1);
        return;
    }
    bool check_arr()
    {
        if(arr.size()%2==0 || arr.size()==1 )
            return false;
        int left=0,right = arr.size()-1;
        
        while(left<right)
        {
            if(arr[left].first!=arr[right].first || arr[left].second==arr[right]
                .second)
                return false;
            left++;
            right--;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        inorder(root,-1);
        return check_arr();
        
    }
};

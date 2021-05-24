/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* createTree(vector<int> &array,int l,int r)
    {
        if(l>=r)
            return NULL;
        int mid = l + (r-l)/2;
        TreeNode *node = new TreeNode(array[mid]);
        node->left = createTree(array,l,mid);
        node->right = createTree(array,mid+1,r);
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> array;
        while(head!=NULL)
        {
            array.push_back(head->val);
            head=head->next;
        }
        return createTree(array,0,array.size());
    }
};

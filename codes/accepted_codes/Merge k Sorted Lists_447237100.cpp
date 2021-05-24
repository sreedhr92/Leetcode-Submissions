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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l2==NULL)
            return l1;
        else if(l1==NULL)
            return l2;
        if(l1->val < l2->val)
        {l1->next = mergeTwoLists(l1->next,l2);return l1;}
        else
        {l2->next = mergeTwoLists(l1,l2->next);return l2;}
        
    }
    ListNode* merge(vector<ListNode*>& lists,int l, int r)
    {
        if(l>r)
            return NULL;
        if(l==r)
            return lists[l];
        if(l+1==r)
            return mergeTwoLists(lists[l],lists[r]);
        int m = l + (r-l) / 2;
        ListNode* l1 = merge(lists,l,m);
        ListNode* l2 = merge(lists,m+1,r);
        return mergeTwoLists(l1,l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return merge(lists,0,lists.size()-1);
    }
};

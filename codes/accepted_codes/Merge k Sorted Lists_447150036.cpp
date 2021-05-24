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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0)
            return NULL;
        if(n==1 && lists[0]==NULL)
            return NULL;
        ListNode * ans;
        ans=NULL;
        for(int i=0;i<n;i++)
        {
            ans = mergeTwoLists(ans,lists[i]);
        }
        return ans;
        
        
    }
};

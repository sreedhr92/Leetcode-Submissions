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
    ListNode* remove(ListNode *head,int prev)
    {
        if(head==NULL)
            return head;
        if(head->val==prev)
            head=remove(head->next,prev);
        else
            head->next= remove(head->next,head->val);
        return head;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        head->next= remove(head->next,head->val);
        return head;
    }
};

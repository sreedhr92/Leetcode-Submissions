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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *temp1 = head;
        if(temp1->val!=temp1->next->val)
        {
            temp1->next = deleteDuplicates(temp1->next);
            return temp1;
        }
        ListNode *temp2 = head->next;
        while(temp2!=NULL && temp2->val == temp1->val)
            temp2=temp2->next;
        return deleteDuplicates(temp2);
        
    }
};

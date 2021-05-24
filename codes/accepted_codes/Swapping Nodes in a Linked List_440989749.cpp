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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL)
            return head;
        int len = 0;
        ListNode *temp = head;
        ListNode *slow = head;
        while(head!=NULL)
        {
            len++;
            if(len==k)
                break;
            head= head->next;
        }
        ListNode *t = head;
        while(head->next!=NULL)
        {
            slow = slow->next;
            head = head->next;
        }
        swap(t->val,slow->val);
        return temp;
        
        
    }
};

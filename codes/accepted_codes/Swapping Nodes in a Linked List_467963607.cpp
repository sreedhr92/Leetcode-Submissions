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
        int len=0;
        ListNode*temp=head;
        ListNode *t1;
        while(head!=NULL)
        {
            len++;
            if(len==k)
                t1=head;
            head=head->next;
        }
        head=temp;
        int count=0;
        while(head!=NULL)
        {
            if(len-count==k)
                break;
            count++;
            head=head->next;
        }
        int val=head->val;
        head->val=t1->val;
        t1->val=val;
        return temp;
        
    }
};

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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
            return NULL;
        int len = 0;
        ListNode *temp = head;
        while(head!=NULL)
        {
            len++;
            head = head->next;
        }
        head = temp;
        if(n==len)
            return head->next;
        int count=0;
        while(1)
        {
            count++;
            if(len-count==n)
                break;
            head = head->next;
        }
        head->next = head->next->next;
        return temp;
        
    }
};

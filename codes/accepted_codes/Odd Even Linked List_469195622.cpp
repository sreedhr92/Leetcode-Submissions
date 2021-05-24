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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL || head->next==NULL)
            return head;    
        ListNode *temp = head;
        ListNode *evenHead = head->next;
        ListNode *eCurrent = evenHead;
        
        while((head->next != NULL) && (eCurrent->next != NULL))
        {
            head->next = eCurrent->next;
            head = head->next;
            
            if(head->next != NULL)
            {
                eCurrent->next = head->next;
                eCurrent = eCurrent->next;
            }
            else
                break;
        }
        
        if(eCurrent->next != NULL) {eCurrent->next = NULL;}
        if(head->next != NULL) {head->next = NULL;}
        
        head->next = evenHead;
        
        return temp;
    }
};

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum=0;
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        while(l1!=NULL && l2!=NULL)
        {
            sum = l1->val+l2->val+carry;
            if(sum>9)
            {
                sum%=10;
                carry=1;
            }
            else
                carry=0;
            head->val = sum;
            l1 = l1->next;
            l2 = l2->next;
            if(l1!=NULL || l2!=NULL)
            {
                head->next = new ListNode(0);
                head = head->next;
            }             
        }
        ListNode *t;
        if(l1!=NULL)
            t = l1;
        if(l2!=NULL)
            t = l2;
        while(t!=NULL)
        {
            sum = t->val+carry;
            if(sum>9)
            {
                sum%=10;
                carry=1;
            }
            else
                carry=0;
            head->val=sum;
            t=t->next;
            if(t!=NULL)
            {
                head->next = new ListNode(0);
                head = head->next;
            }
        }
        if(carry)
            head->next = new ListNode(1);
        return temp;
        
        
    }
};

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
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        int sum =0,carry = 0;
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        ListNode *t=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            sum = l1->val + l2->val + carry;
            if(sum>9)
            {
                sum  = sum%10;
                carry = 1;
            }
            else
                carry =0;
            head->val = sum;
            l1 = l1->next;
            l2 = l2->next;
            if(l1!=NULL || l2!=NULL)
            {
                ListNode *a = new ListNode(0);
                a->next = NULL;
                head ->next = a;           
                head = a;
            }
            else
                head->next = NULL;
        }
        if(l1==NULL && l2!=NULL)
            t = l2;
        else if(l2==NULL && l1!=NULL)
            t = l1;
        while(t!=NULL)
        {
            sum = t->val + carry;
            if(sum>9)
            {
                sum  = sum%10;
                carry = 1;
            }
            else
                carry =0;
            t = t->next;
            head->val = sum;
            if(t!=NULL)
            {
                ListNode *a = new ListNode(0);
                a->next = NULL;
                head ->next = a;           
                head = a;
            }
            else
                head->next = NULL;
        }
        if(carry)
        {
            ListNode *a = new ListNode(1);
            head->next =a;
            a->next = NULL;
        }
        return temp;
    }
};

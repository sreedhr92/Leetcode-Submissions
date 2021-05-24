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
        cout<<"len = "<<len<<endl;
        while(1)
        {
            count++;
            cout<<"count = "<<count<<" val = "<<head->val<<endl;
            if(len-count==n)
                break;
            head = head->next;
        }
        cout<<" head val = "<<head->val<<endl;
        if(head->next->next==NULL)
            head->next=NULL;
        else
            head->next = head->next->next;
        return temp;
        
    }
};

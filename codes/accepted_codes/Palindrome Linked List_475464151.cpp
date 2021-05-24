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
    bool isPalindrome(ListNode* head) {
        int n=0;
        ListNode *temp=head,*prev,*curr;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        //n-> size of linked list
        int x=0;
        temp=head;
        prev=NULL;
        curr=head;
        // reversing the linked list till half 
        
        while(x<n/2){
            curr=curr->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
            x++;
        }
        
        //if size is odd passing one 
        if(n%2)
            curr=curr->next;
        
        //since half the list has been reversed and starting point of other half is 
            curr
        //checking whether both r same
        
        while(curr!=NULL&&prev!=NULL){
            if(curr->val!=prev->val)
                return false;
            curr=curr->next;
            prev=prev->next;
        }
        return true;
    }
};

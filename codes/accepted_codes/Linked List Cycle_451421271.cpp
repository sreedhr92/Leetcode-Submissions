/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        unordered_map<ListNode*,int> hash;
        while(head!=NULL)
        {
            if(hash.find(head)!=hash.end())
                return true;
            hash[head]=1; 
            head = head->next;
        }
        return false;
        
    }
};

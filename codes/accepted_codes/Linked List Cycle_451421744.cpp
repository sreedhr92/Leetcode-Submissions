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
            hash[head]++;
            if(hash[head]==2)
                return true;
            head = head->next;
        }
        return false;
        
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL )
            return NULL;
        unordered_map<Node*,Node*> hash;
        Node *temp = head;
        while(head!=NULL)
        {
            hash[head] = new Node(head->val);
            head = head->next;
        }
        head= temp;
        while(head!=NULL)
        {
            hash[head]->next = hash[head->next];
            hash[head]->random = hash[head->random];
            head = head->next;
        }
        return hash[temp];
        
        
    }
};

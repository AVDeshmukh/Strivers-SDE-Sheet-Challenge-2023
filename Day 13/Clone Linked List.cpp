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
O(1)- Space

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter=head;
        Node* front=head;
        while(iter)
        {
            front=iter->next;
            Node* copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }
        iter=head;
        while(iter)
        {
            if(iter->random)
            {
                iter->next->random=iter->random->next;
            }
            iter=iter->next->next;
        }
        iter=head;
        Node* dummy=new Node(0);
        Node* ans=dummy;
        while(iter)
        {
            front=iter->next->next;
            dummy->next=iter->next;
            iter->next=front;
            dummy=dummy->next;
            iter=iter->next;
        }
        return ans->next;
    }
};
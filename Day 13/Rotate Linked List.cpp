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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL||k == 0)
            return head;
        ListNode* p=head;
        int n=1;
        while(p->next)
        {
            n++;
            p=p->next;
        }
        p->next=head;
        ListNode* f=head;
        
        k=k%n;
        int e=n-k;
        while(e--)
            p=p->next;
        head=p->next;
        p->next=NULL;
        return head;
    }
};
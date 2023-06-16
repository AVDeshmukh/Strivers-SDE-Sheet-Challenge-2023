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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p=headA;
        set<ListNode*>s;
        while(p)
        {
            s.insert(p);
            p=p->next;
        }
        ListNode* q=headB;
        while(q)
        {
            if(s.find(q)!=s.end())
            {
                return q;
            }
            q=q->next;
        }
        return NULL;
    }
};
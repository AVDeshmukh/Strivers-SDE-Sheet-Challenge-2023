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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*>s;
        ListNode *first=head;
        while(first!=NULL)
        {
            if(s.find(first)!=s.end())
                return first;
            s.insert(first);
            first=first->next;
        }
        return first;
    }
};
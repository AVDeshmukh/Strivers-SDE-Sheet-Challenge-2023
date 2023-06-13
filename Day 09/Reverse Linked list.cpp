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
    ListNode* reverseList(ListNode* head) {
        ListNode* first=head;
        ListNode* second=NULL;
        ListNode* third=NULL;
        while(first!=NULL)
        {
            third=second;
            second=first;
            first=first->next;
            second->next=third;
        }
        return second;
    }
};
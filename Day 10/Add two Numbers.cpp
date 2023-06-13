/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
        ListNode* p=l1;
        ListNode* q=l2;
        int k=(p->val) + (q->val);
        ListNode* head=new ListNode(k%10);
        int c=k/10;
        p=p->next;
        q=q->next;
        ListNode* last=head;
        while(p && q)
        {
            int k=(p->val) + (q->val)+c;
            cout<<k<<endl;
            ListNode* h=new ListNode(k%10);
            h->next=NULL;
            p=p->next;
            q=q->next;
            c=k/10;
            last->next=h;
            last=h;
        }
        while(p)
        {
            int k=(p->val)+c;
            ListNode* h=new ListNode(k%10);
            h->next=NULL;
            p=p->next;
            c=k/10;
            last->next=h;
            last=h;
        }
        while(q)
        {
            int k=(q->val)+c;
            ListNode* h=new ListNode(k%10);
            h->next=NULL;
            q=q->next;
            c=k/10;
            last->next=h;
            last=h;
        }
        while(c>0)
        {
            ListNode* h=new ListNode(c%10);
            h->next=NULL;
            c=c/10;
            last->next=h;
            last=h;
        }
        return head;
}

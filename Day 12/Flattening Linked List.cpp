{
    Node* temp=new Node(0);
    Node* ans=temp;
    while(p && q)
    {
        if(p->data < q->data)
        {
            temp->bottom=p;
            temp=temp->bottom;
            p=p->bottom;
        }
        else
        {
            temp->bottom=q;
            temp=temp->bottom;
            q=q->bottom;
        }
    }
    if(p)
        temp->bottom=p;
    else
        temp->bottom=q;
    return ans->bottom;
}

Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
        return root;
    root->next=flatten(root->next);
    root=merge(root, root->next);
    
    return root;
}
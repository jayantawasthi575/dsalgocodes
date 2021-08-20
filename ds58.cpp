Node* deleteNode(Node *head,int x)
{   
    if(x==1)
    return head->next;
    int i=1;
    Node* dummy=head;
    Node* prev=head;
    while(i<=x)
    {
        if(i==x)
        {
            prev->next=head->next;
            delete head;
        }
        i++;
        prev=head;
        head=head->next;
    }
    return dummy;
}

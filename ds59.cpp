int countNodesinLoop(struct Node *head)
{
    Node* fast=head;
    Node* slow=head;
    int t=0;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
        t=1;
        break;
        }
    }
    if(t==0)
    return 0;
    int c=1;
    Node* move=fast;
    while(1)
    {
        move=move->next;
        if(move==fast)
        return c;
        c++;
    }
}   
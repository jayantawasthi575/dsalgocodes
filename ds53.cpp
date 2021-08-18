int getMiddle(Node *head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(slow->data)
    return slow->data;
    else
    return -1;
}
int getMiddle(Node *head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(slow->data)
    return slow->data;
    else
    return -1;
}

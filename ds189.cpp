Node* reverse(Node* head)
{
    Node* current = head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
int getNthFromLast(Node *head, int n)
{
     Node* rev=reverse(head);
     int m=1;
     while(m<n && rev!=NULL)
     {
         rev=rev->next;
         m++;
     }
     if(m==n && rev!=NULL)
     return rev->data;
     else
     return -1;
}
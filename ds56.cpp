Node *removeDuplicates(Node *head)
{
 Node* carry=head;
 Node* prev=head;
 int temp=head->data;
 head=head->next;
 while(head!=NULL)
 {
     if(head->data==temp)
     {
         prev->next=head->next;
         delete head;
         head=prev->next;
     }
     else
     {
         prev=head;
         temp=head->data;
         head=head->next;
     }
 }
 return carry;
}
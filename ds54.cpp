int getNthFromLast(Node *head, int n)
{
     Node* fast=head;
     Node* slow=head;
     int i;
     for(i=1;i<=n;i++)
      {
      if(fast->next==NULL && i==n)
        return slow->data;
      else if(fast->next==NULL)
       return -1;
        fast=fast->next;
      }
      while(fast->next!=NULL)
      {   
          fast=fast->next;
          slow=slow->next;
      }
      return slow->next->data;
}
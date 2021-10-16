Node* findIntersection(Node* head1, Node* head2)
{
   Node* temp1=new Node(0);
   Node* temp3=temp1;
   while(head1!=NULL && head2!=NULL)
   {
       if(head1->data>head2->data)
       {
           head2=head2->next;
       }
       else if(head2->data>head1->data)
       {
           head1=head1->next;
       }
       else
       {
           Node* temp2=new Node(head1->data);
           temp1->next=temp2;
           temp1=temp1->next;
           head1=head1->next;
           head2=head2->next;
       }
   }
   return temp3->next;  
}